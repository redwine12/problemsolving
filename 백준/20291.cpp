#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <map>

using namespace std;
typedef long long ll;

int n;
string str;

map<string, int> mp;
vector<string> temp;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    while(n--){
        temp.clear();
        cin >> str;
        
        istringstream ss(str);
        string buf; // 분리된 문자열 저장공간 역할
        
        while(getline(ss, buf, '.')){
            temp.push_back(buf);
        }
        
        mp[temp[1]]++;
        
    }
    
    for(auto c : mp)
        cout << c.first << " " << c.second << endl;
    
    return 0;
}
