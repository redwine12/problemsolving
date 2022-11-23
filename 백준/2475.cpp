#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, sum=0;

    for(int i=0; i<5; i++){
        cin >> n;
        n = pow(n,2);
        sum += n;
    }
    
    cout << sum%10 << endl;
    return 0;
}
