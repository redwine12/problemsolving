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

    int t, num, ans=0;
    cin >> t;
    while(t--){
        cin >> num;
        int count =0;
        for(int i=1; i<=num; i++){
            if(num%i == 0)
                count++;
        }
        
        if(count == 2)
            ans++;
    }
    
    cout << ans << endl;
    return 0;
}
