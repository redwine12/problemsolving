#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, ans = 1;
    string str;
    cin >> n >> str;
    char first = str[0];
    
    for(int i=0; i<n-1; i++){
        cin >> str;
        if (first != str[0])
            ans = 0;
    }
    
    cout << ans << "\n";
    return 0;
}
