#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, range=0, dev;
    cin >> n;
    int test = n;
    while(test>0){
        range++;
        test/=10;
    }

    int temp = n;
    for(int i=0; i<range-1; i++){
        dev = pow(10,i);
        if(temp%10 >= 5)
            n += (10-(temp%10))*dev;
        else
            n -= (temp%10)*dev;
        temp = n/(10*dev);
    }
    
    cout << n << endl;
    return 0;
}
