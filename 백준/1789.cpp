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

    long long num, sum = 0;
    int count=0;
    cin >> num;
    
    int i= 1;
    while(1){
        sum+=i;
        count++;
        if(sum > num){
            count--;
            break;
        }
        i++;
    }
    
    cout << count << '\n';
    return 0;
}
