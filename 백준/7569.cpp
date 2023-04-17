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

int board[102][102][102];
int vis[102][102][102];

int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {0,0,0,0,1,-1};

int m, n, h;
queue<pair<pair<int,int>,int>> q;

void bfs(){
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        
        for(int i=0; i<6; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m || ny >= m || nz >= h) continue;
            if(vis[nx][ny][nz] >= 0) continue;
            vis[nx][ny][nz] = vis[x][y][z] + 1;
            q.push({{nx, ny},nz});
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m >> n >> h;
    
    for(int k = 0; k < h; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> board[i][j][k];
                    if(board[i][j][k] == 1) q.push({{i,j},k});
                    if(board[i][j][k] == 0) vis[i][j][k] = -1;
                }
            }
        }
    
    bfs();
    
    int ans = 0;
    for(int k = 0; k < h; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(vis[i][j][k] == -1){
                        cout << "-1" << endl; return 0;
                    }
                    ans = max(vis[i][j][k], ans);
                }
            }
        }
    
    cout << ans << endl;
    return 0;
}
