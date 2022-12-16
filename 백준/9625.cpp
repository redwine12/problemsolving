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
    
    int k;
    int a[46];
    int b[46];
    a[1]=0;
    a[2]=1;
    b[1]=1;
    b[2]=1;
    
    for(int i=3; i<=45; i++){
        a[i] = b[i-1];
        b[i] = a[i-1] + b[i-1];
    }
    
    cin >> k;
    
    cout << a[k] << " " << b[k] << endl;
    return 0;
}
