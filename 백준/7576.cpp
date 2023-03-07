#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

#define X first
#define Y second

using namespace std;
typedef long long ll;

int board[1005][1005];
int vis[1005][1005];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int m, n;
queue<pair<int, int>> q;

void bfs(){
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if (board[i][j] == 1) q.push({i,j});
            if (board[i][j] == 0) vis[i][j] = -1;
        }
    }
    
    bfs();
    
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (vis[i][j] == -1){
                cout << "-1" << endl;
                return 0;
            }
            ans = max(ans, vis[i][j]);
        }
    }
    
    cout << ans << endl;
    return 0;
}
