#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a,b,ans = 0;
    vector<int> v;
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=i; j++)
        {
            v.push_back(i);
        }
    }
    v.insert(v.begin(), 0);
    
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        ans += v[i];
    }
    
    cout << ans << endl;
    return 0;
}
