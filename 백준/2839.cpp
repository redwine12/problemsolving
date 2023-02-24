#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    int count = 0;
    while(n>0){
        if(n%3 == 0 && n<13){
            count += n/3;
            break;
        }
        if(n>=5){
            n -= 5; count++;
        }
    
        else if(n<5){
            n -= 3; count++;
        }
    }
    
    if(n < 0) cout << "-1" << endl;
    else cout << count << endl;
    return 0;
}
