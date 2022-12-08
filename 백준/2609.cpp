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

    int a,b, maxdev, minmul = 0;
    cin >> a >> b;
    if(a>b)
        swap(a, b);
    int tempa = a, tempb = b;
    
    for(int i=a; i>=1; i--){
        if(a%i == 0 && b%i == 0){
            maxdev = i;
            break;
        }
    }
    
    while(minmul == 0){
        if(a==b)
            minmul = a;
        a+=tempa;
        if(a>b)
            b+=tempb;
    }
    
    cout << maxdev << "\n" << minmul << endl;
    return 0;
}
