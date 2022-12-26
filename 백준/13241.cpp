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

    long long int a, b, ans = 0;
    cin >> a >> b;
    
    if(a > b)
        swap(a, b);
    
    long long int temp = b;
    while(ans == 0){
        if(b%a == 0)
            ans = b;
        
        b += temp;
    }
    
    cout << ans << endl;
    return 0;
}
