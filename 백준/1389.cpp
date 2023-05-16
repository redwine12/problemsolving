#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

using namespace std;
typedef long long ll;

bool board[105][105];
int vis[105];
int n, m, a, b;
queue<int> q;

void visInit(){
    fill(vis, vis+m+1, 0);
}

void bfs(int start){
    q.push(start);
//    vis[start] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=1; i<=n; i++){
            if(board[cur][i] == 1 && vis[i] == 0){
                vis[i] = vis[cur] + 1;
                q.push(i);
            }
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        board[a][b] = 1;
        board[b][a] = 1;
    }
    
    int max = 10000000, ans;
    
    for(int i=1; i<=n; i++){
        visInit();
//        for(int i=0; i<=m; i++) cout << vis[i] << " ";
//        cout << endl;
        bfs(i);
        int sum = 0;
        for(int j=1; j<=n; j++){
            if(i==j) continue;
            else sum += vis[j];
        }
//        cout << sum << endl;
        if(sum < max) {
            max = sum;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
