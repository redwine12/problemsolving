#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    if(n == 1)
        return 0;
    int dev = 2;
    while(n>1){
        while(n%dev == 0){
            cout << dev << "\n";
            n /= dev;
        }
        dev++;
    }
    
    return 0;
}
