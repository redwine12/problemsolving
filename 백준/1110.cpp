#include <iostream>
#include <algorithm>
#pragma warning(disable:4996)
#include <vector>

using namespace std;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, newn = 0, count = 0;
    cin >> n;
    if(n==0)
        {
            cout << 1 << endl;
            return 0;
        }
    if(n<10)
        n *= 10;
    int temp = n;
    while(n != newn){
        count++;
        newn = (temp%10)*10 + (temp%10+temp/10)%10;
        temp = newn;
    }
    cout << count << endl;
    
    return 0;
}
