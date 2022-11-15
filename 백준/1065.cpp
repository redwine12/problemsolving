#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int num, ans = 0;
    cin >> num;
    vector<int> v;
    
    if(num == 1000)
        ans = 144;
    else if (num < 100){
        ans = num;
    }
    else if(num >= 100){
        ans += 99;
        for(int temp=100; temp<=num; temp++){
            if(((temp%10)-(temp/10)%10) == ((temp/10)%10)-(temp/100))
                ans++;
        }
    }
    cout << ans << "\n";
}
