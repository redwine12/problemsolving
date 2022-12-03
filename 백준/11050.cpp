#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int fac(int x){
    int sum=1;
    for(int i=x; i>=1; i--){
        sum*=i;
    }
    return sum;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    cout << fac(n)/(fac(n-k)*fac(k)) << endl;
   
    return 0;
}


/* 이항 계수 --- [ 다른 풀이 ]

 int main(int argc, const char * argv[]){
     ios_base::sync_with_stdio(false);
     cin.tie(0);

     int n,k,up=1,down=1;
     cin >> n >> k;
     
     for(int i=n; i>n-k; i--)
         up *= i;
     
     
     for(int i=k; i>=1; i--)
         down *= i;
     
     cout << up/down << endl;
     
     return 0;
 }

 */
