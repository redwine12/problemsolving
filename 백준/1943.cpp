#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b>a)
            swap(a,b);
        
        int add = a, add2 = b, ans = 0;
        while(ans == 0){
            if(b == a){
                ans = b;
            }

            b += add2;
            
            if(b>a)
                a+=add;
        }
        cout << ans << endl;
    }
}
