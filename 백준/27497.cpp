#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#include <deque>

using namespace std;
typedef long long ll;

int n, num;
char alpha;
string str;

deque<char> dq;
vector<int> flag;

void solve(){
    for(int i=0; i<n; i++){
        cin >> num;
        if(num == 1){
            cin >> alpha;
            dq.push_back(alpha);
            flag.push_back(1);
        }
        else if(num == 2){
            cin >> alpha;
            dq.push_front(alpha);
            flag.push_back(2);
        }
        
        else if(num == 3){
            if(dq.empty()) continue;
            if(flag.back() == 1) dq.pop_back();
            else if(flag.back() == 2) dq.pop_front();
            flag.pop_back();
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    solve();
    
    if(dq.empty())
        cout << 0 << endl;

    else{
        for(auto c: dq) cout << c;
        cout << endl;
    }

    return 0;
}
