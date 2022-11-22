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
    for(int i=1; i<=9; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    
    return 0;
}
