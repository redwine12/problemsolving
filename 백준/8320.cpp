#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    
    int n, temp, count = 0;
    cin >> n;
    
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            temp = i*j;
            if(temp <= n)
                count++;
        }
    }
    
    cout << count << "\n";

    return 0;
}
