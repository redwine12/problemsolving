#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int have, find, need, ans = 0;
    cin >> have >> find >> need;
    int bin = have+find;
    while(bin>=need){
        ans += bin/need;
        bin = bin/need + bin%need;
    }
    cout << ans << "\n";
    return 0;
}
