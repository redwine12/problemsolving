#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    vector<string> v;
    vector<string> v2;
    string str;
    while(t--){
        cin >> str;
        v.push_back(str);
        reverse(str.begin(), str.end());
        v2.push_back(str);
    }
    
    for(int i=0; i<v.size(); i++)
        for(int j=i; j<v2.size(); j++){
            if(v[i] == v2[j])
                {
                    string newstr = v[i];
                    int mid = newstr.size();
                    mid /= 2;
                    cout << newstr.size() << " " << newstr[mid] << endl;
                    break;
                }
        }
    
    return 0;
}
