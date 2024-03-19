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

string str;
char c;
vector<pair<string, char>> v;

int score[] = {10,8,6,5,4,3,2,1};

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    for(int i=0; i<8; i++){
        cin >> str >> c;
        v.push_back({str, c});
    }
    
    sort(v.begin(), v.end());
    
    int b=0, r=0;
    for(int i=0; i<8; i++){
        if(v[i].second == 'B')
            b+=score[i];
        else if(v[i].second == 'R')
            r+=score[i];
    }
    
    if(b>r) cout << "Blue" << endl;
    else cout << "Red" << endl;
    return 0;
}
