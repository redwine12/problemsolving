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

    int a,b,c;
    cin >> a >> b >> c;
    
    int e=1, s=1, m=1, year=1;
    while(1){
        if(e==a && s==b && m==c)
            break;
        e++;
        s++;
        m++;
        if(e>15)
            e=1;
        if(s>28)
            s=1;
        if(m>19)
            m=1;
        year++;
        
    }
    
    cout << year << endl;
    return 0;
}
