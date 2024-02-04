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

using namespace std;
typedef long long ll;

vector<int> v[1001];
bool visited[1001];
int n, m, a, b;

queue<int> q;

void bfs(int num) {
    q.push(num);
    visited[num] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int i=0; i<v[cur].size(); i++){
            if(visited[v[cur][i]] == false){
                visited[v[cur][i]] = true;
                q.push(v[cur][i]);
            }
        }
    }
}

void solve() {
    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            bfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    solve();

    return 0;
}
