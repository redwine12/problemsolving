#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int num, sum = 0;
    cin >> num;
    
    int dev = 10000, temp;
    while (dev >= 1){
        temp = num/dev;
        if(temp >= 10)
        {
            while (temp >= 10){
                temp %= 10;
            }
        }
        sum += pow(temp, 5);
        dev /= 10;
    }
    
    cout << sum << "\n";
    
    return 0;
}
