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
    
    long long a,b,c,d,k, value1, value2;
    cin >> k >> a >> b >> c >> d;
    
    if(a == 0 || c == 0){
        cout << "No" << endl; return 0;
    }
    
    value1 = (a*k) + b;
    value2 = (c*k) + d;
    
    if(value1 == value2)
        cout << "Yes" << " " <<  value1 << endl;
    else
        cout << "No" << endl;

    return 0;
}
 
