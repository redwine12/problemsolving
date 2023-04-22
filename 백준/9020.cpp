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

int t, n, ans1, ans2;
#define MAX 10000
vector<int> v;

bool check(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0) count++;
    }
    if(count == 2) return true;
    else return false;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> t;
    
    while(t--){
        cin >> n;
        int diff = MAX;
        
        for(int i=n/2; i>=2; i--){
            if(check(i) && check(n-i)){
                cout << i << " " << n-i << endl;
                break;
            }
        }
    }

    return 0;
}
