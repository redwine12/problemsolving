#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, sum = 0;
    cin >> n;
    for(int i=1; i<=n-1; i++){
        sum += (n+1)*i;
    }
    
    cout << sum << endl;
    return 0;
}
