#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int kim, lim, n;

int doMath(int x){
    if(x%2==0) x/=2;
    else x = (x/2)+1;
    return x;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> kim >> lim;
    
    int round=0;
    while(n>1){
        round++;
        
        if((kim+1 == lim && kim % 2 == 1) || ((lim+1 == kim && lim % 2 == 1)))
            break;
        
        kim = doMath(kim);
        lim = doMath(lim);
        doMath(n);
    }
    
    cout << round << endl;
    return 0;
}
