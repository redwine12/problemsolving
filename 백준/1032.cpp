#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;
vector<string> v;

string solve(){
    string str1 = v[0];
    for(int i=1; i<n; i++){
        string str2 = v[i];
        for(int j=0; j<str1.size(); j++){
            if(str1[j] == str2[j] || str1[j] == '?') continue;
            else {
                str1[j] = '?';
            }
        }
    }
    return str1;
}


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    string str;
    for(int i=0; i<n; i++){
        cin >> str;
        v.push_back(str);
    }
    
    
    cout << solve() << endl;
    return 0;
}
