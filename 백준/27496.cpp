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

int n, l;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> l;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    int count(0), cooltime(0), idx(0);
    int sum = 0;
    
    for(int i=0; i<n; i++){
        if(i>0) cooltime++;
        
        if(cooltime == l){
            cooltime--;
            sum -= v[idx];
            idx++;
        }
        
        sum += v[i];
//        cout << sum << endl;
        if(sum >= 129 && sum <= 138) count++;
    }
        
    cout << count << endl;
    return 0;
    
}
