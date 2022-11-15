#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, input, dev, add;
    long long ans = 0;
    vector<int> v;
    
    cin >> n;
    while(n--){
        cin >> input;
        v.push_back(input);
    }
    

    if(v[1]%v[0] == 0 && v[2]%v[1] == 0){
        dev = v[1]/v[0];
        ans = v.back()*dev;
    }

        else if(v[1]-v[0] == v[2]-v[1]){
            add = v[1] - v[0];
            ans = v.back()+add;
        }

    
    cout << ans << "\n";
    return 0;
}
