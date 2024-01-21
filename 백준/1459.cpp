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

ll x,y,walk,cross;
ll ans(0);

void input(){
    cin >> x >> y >> walk >> cross;
}

void ifff(ll a){

    if(a>=2 && walk>cross){
        while(a>=2){
            ans += cross*2;
            a-=2;
        }
        ans+=walk*a;
    }
    else ans+=walk*a;

}

void solve() {
    if(walk*2<=cross) ans = (x+y)*walk;
    else {
        while(x>0 && y>0){
            ans += cross;
            x--; y--;
        }
        if(x>0){
            ifff(x);
        }
        else if(y>0){
            ifff(y);
        }
    }

    cout << ans << endl;
}

int main(int argc, const char * argv[]){
    input();

    solve();

    return 0;
}
