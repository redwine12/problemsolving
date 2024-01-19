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

int n, cnt(0);

void input(){
    cin >> n;
}

void solve() {
    if(n%5 == 0){
            cout << n/5 << endl;
            return;
    }

    else {
            while(n>0){
                n -= 2;
                cnt++;
                if(n%5 == 0){
                    cout << cnt + n/5 << endl;
                    break;
                }
            }
    }

    if(n<0) cout << -1 << endl;

}

int main(int argc, const char * argv[]){
    input();

    solve();

}
