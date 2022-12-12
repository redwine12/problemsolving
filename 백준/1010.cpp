#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,n,m,ans = 0;
    cin >> t;
    while(t--){
        cin >> n >> m;
        
        long long ans=1;
        int dev=1;
        for(int i=m; i>m-n; i--){
            ans*= i;
            ans/=dev;
            dev++;
        }
        cout << ans << endl;
    }
    return 0;
}
