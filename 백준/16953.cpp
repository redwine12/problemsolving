#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#include <queue>
#define endl '\n'
#define MAX

#define X first
#define Y second

using namespace std;
typedef long long ll;

ll a, b, ans = -1;
queue<pair<ll, ll> > q;

void input(){
    cin >> a >> b;
}

void bfs() {
    while(!q.empty()){
    	auto cur = q.front();
    	ll num = cur.X;
    	ll cnt = cur.Y;

    	q.pop();

    	if(num == b){
    		ans = cnt;
    		break;
		}

		if(num*2 <= b) q.push({num*2, cnt+1});
		if(num*10<=b) q.push({num*10+1, cnt+1});
	}
}

int main(int argc, const char * argv[]){
    input();

    q.push({a, 1});
    bfs();

    cout << ans << endl;
}
