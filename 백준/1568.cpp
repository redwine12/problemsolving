#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, sec = 0, k = 0;
    cin >> n;
    
    while(n>0){
        if(n == 0)
            break;
        k++;
        if (n<k)
            k=1;
        n-=k;
        sec++;
    }
    
    cout << sec << "\n";
    return 0;
}
