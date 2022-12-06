#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int num = 1;
    while(1){
        int huga, day, useday, ans = 0;
        cin >> useday >> day >> huga;
        if(useday==0 && day==0 && huga==0)
            return 0;
        
        ans += useday * (huga/day);
        if(huga%day<=useday)
            ans += huga%day;
        else
            ans += useday;
        
        cout << "Case " << num << ": " << ans << endl;
        num++;
    }

    return 0;
}
