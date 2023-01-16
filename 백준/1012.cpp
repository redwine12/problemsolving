#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

using namespace std;
typedef long long ll;

#define X first
#define Y second

int board[51][51];
bool visited[51][51];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int m,n,k;
queue<pair<int, int>> q;

void bfs(int x, int y){
    visited[x][y] = 1;
    q.push(make_pair(x, y));
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(visited[nx][ny] == 1 || board[nx][ny] != 1) continue;
            
            visited[nx][ny] = 1;
            q.push(make_pair(nx,ny));
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        cin >> m >> n >> k;
        
        int x,y;
        // 심어져 있는 곳 체크
        for(int i=0; i<k; i++){
            cin >> x >> y;
            board[y][x] = 1;
        }
        int count=0; // 지렁이 수
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(board[i][j]==1 && visited[i][j] != 1){
                    bfs(i, j);
                    count++;
                }
            }
        }
        cout << count << endl;
//        int board[51][51] = {0, };
//        bool visited[51][51] = {0, };
        for(int i=0; i<n; i++){
            fill(board[i], board[i]+m, 0);
            fill(visited[i], visited[i]+m, 0);
        }
    }
    return 0;
}
