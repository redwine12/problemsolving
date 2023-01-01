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
    
    int n, count = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            long long temp = i*j + j*(j-1)/2;
            if(temp == n)
            {
                count++;
                break;
            }
            else if(temp > n)
                break;
        }
    }
    cout << count << endl;
    return 0;
}
