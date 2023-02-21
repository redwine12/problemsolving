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
ll ans =0, temp = 1;
string str;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> str;
    
    for(int i=0; i<n; i++){
        ans += ((str[i]-'a'+1)*temp) % 1234567891;
        temp *= 31;
        temp %= 1234567891;
    }
    
    cout << ans%1234567891 << endl;
    return 0;
}
