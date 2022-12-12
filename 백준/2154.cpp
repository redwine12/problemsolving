#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string num;
    cin >> n;
    for(int i=1; i<=n; i++){
        num += to_string(i);
    }
    
    int ans = num.find(to_string(n));
    cout << ans+1 << "\n";
    return 0;
}
