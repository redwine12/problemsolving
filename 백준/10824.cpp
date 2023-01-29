#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

string a,b,c,d;


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    
    long long num1, num2;
    num1 = stoll(a);
    num2 = stoll(c);
    
    cout << num1+num2 << endl;
    
    return 0;
}
