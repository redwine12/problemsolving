#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll n, m, ans;
vector<ll> v;

// 함수사용 X
ll binarySearch(ll max, ll m, ll n){
    ll left = 1, right = max;

    while(left<=right){
        ll mid = (left+right)/2;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            if(mid<v[i]) sum += v[i]-mid;
            else continue;
        }

        if(sum > m) left = mid+1;
        else if(sum < m) right = mid-1;
        else ans = mid;

    }

    return ans;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    
    cin >> n >> m;
    ll input, max=0;
    for(int i=0; i<n; i++){
        cin >> input;
        v.push_back(input);
        if(input>max) max = input;
    }
    
    ll left = 0, right = max;
    
    // binary search
    while(left<=right){
        ll mid = (left+right)/2;
        ll sum = 0;
        
        for(int i=0; i<n; i++){
            if(mid<v[i]) sum += v[i]-mid;
            else continue;
        }
        
        if(sum > m) {
            if(mid>ans) ans = mid;
            left = mid+1;
        }
        else if(sum < m) right = mid-1;
        else {
            ans = mid;
            break;
        }
        
    }
    cout << ans << endl;
    return 0;
}
