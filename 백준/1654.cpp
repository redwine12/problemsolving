#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

ll k, n;
vector<ll> v(k);

// 함수 사용 x
ll binarySearch(ll max, ll k){
    ll left = 1, right = max, mid, ans=0;
    
    while(left<=right){
        ll sum = 0;
        mid = (left+right)/2;
        for(int i=0; i<k; i++){
            sum += v[i]/mid;
        }
        
        if(sum >= n){
            left = mid + 1;
            if(mid > ans) ans = mid;
        }
        
        else right = mid - 1;
        
    }
    return ans;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    int i=0, input;
    
    cin >> k >> n;
    
    ll max = 0;

    for( ; i<k; i++){
        cin >> input;
        v.push_back(input);
        if(input > max) max = input;
    }
    
    
    cout << binarySearch(max, k) << endl;
    
    return 0;
}
