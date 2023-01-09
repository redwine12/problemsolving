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

    int n, count=0, num=666;
    cin >> n;
    
    while(1){
        int temp = num;
        while(temp>=666){
            if(temp % 1000 == 666)
            {
                count++;
                break;
            }
            temp/=10;
        }
        
        if(count == n){
            cout << num << '\n';
            return 0;
        }
        
        num++;
    }
}
