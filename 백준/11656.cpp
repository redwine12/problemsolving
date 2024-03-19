#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

vector<string> v;
string str, temp;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;

    for(int i=0; i<str.size(); i++){
        v.push_back(str.substr(i,str.size()));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;
    
    return 0;
}

// erase 이용
/*
int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> str;

    for(int i=0; i<str.size(); i++){
        temp = str;
        v.push_back(temp.erase(0,i));
    }

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
*/
