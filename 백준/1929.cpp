#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>

using namespace std;

int arr[1000001]{0, };
int a,b;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    cin >> a >> b;
    
    for(int i=2; i<=b; i++){
        for(int j=i*2; j<=b; j+=i)
            if(arr[i] == 0) arr[j] = 1;
    }
    
    for(int i=a; i<=b; i++){
        if(i == 1) continue;
        if(arr[i] == 0) cout << i << '\n';
    }
    
    return 0;
}
