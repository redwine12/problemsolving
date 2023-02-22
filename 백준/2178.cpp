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

int vis[101][101];
char board[101][101];

int m, n;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

queue<pair<int, int>> q;

void bfs(int a, int b){
    q.push({a, b});
    vis[a][b] = 1;
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >=m) continue;
            if(vis[nx][ny] > 0 || board[nx][ny] != '1') continue;
            q.push({nx,ny});
            vis[nx][ny] = vis[cur.X][cur.Y]+1;
        }
        
    }
    
}

int main(int argc, const char * argv[]){
    cin.tie(0); cout.tie(nullptr);
        
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // cin >> board[i][j]
            scanf("%1s", &board[i][j]);
            vis[i][j] = 0;
        }
    }
    
    bfs(0,0);
    
    
    
    cout << vis[n-1][m-1] << endl;
    
    
    return 0;
}
