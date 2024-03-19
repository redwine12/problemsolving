#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

map<string, int> mp;
int n;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        mp[str]++;
    }
    
    int max = -1;
    string ans;
    for(auto c : mp){
        if(c.second > max){
            max = c.second;
            ans = c.first;
        }
    }
    
    cout << ans << endl;
    return 0;
}
