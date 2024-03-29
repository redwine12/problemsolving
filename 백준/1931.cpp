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

int n;
vector<pair<int, int>> v;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    int start, end;
    for(int i=0; i<n; i++){
        cin >> start >> end;
        v.push_back({end, start});
    }
    
    sort(v.begin(), v.end());
    
//    for(int i=0; i<v.size(); i++)
//        cout << v[i].second << " " << v[i].first << endl;
//
    int cnt = 1;
    int time = v[0].first;
    for(int i=1; i<n; i++){
        if(v[i].second >= time){
            cnt++;
            time = v[i].first;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
