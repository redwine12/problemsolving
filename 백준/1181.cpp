#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

bool func(string a, string b){
    if(a.size() == b.size())
        return a<b;
    else if(a.size() < b.size())
        return true;
    else
        return false;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end(), func);

    //중복 제거
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;
                                 
    return 0;
}
