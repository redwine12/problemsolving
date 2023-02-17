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

map<string, bool> mp;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> str;
    for(int i=0; i<str.size(); i++){
        for(int j=1; j<=str.size(); j++){
            string temp = str.substr(i,j);
            if(mp[temp]) continue;
            else mp[temp] = 1;
        }
    }
    
    cout << mp.size() << endl;
    return 0;
}
