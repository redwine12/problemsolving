#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

void solve(int n, int from, int temp, int to){
    if(n == 1){
        cout << from << " " << to << endl;
        return;
    }
    solve(n-1, from, to, temp);
    cout << from << " " << to << endl;
    solve(n-1, temp, from, to);
}

int n, a, b, c;

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    cout << (int)pow(2, n) - 1 << endl;
    
    solve(n, 1, 2, 3);
     
    return 0;
}
