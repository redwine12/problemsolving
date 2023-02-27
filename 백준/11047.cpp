#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n, k;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.rbegin(), v.rend());
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(k - v[i] < 0) continue;
        else{
            count += k/v[i];
            k %= v[i];
        }
    }
    
    cout << count << endl;
    
    return 0;
}
