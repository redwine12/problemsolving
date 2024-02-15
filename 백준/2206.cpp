#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <cmath>
#include <queue>

#define endl '\n'
#define MAX 1001

using namespace std;
typedef long long ll;

int n, m;
int board[MAX][MAX];
int vis[MAX][MAX][2];
queue<pair<pair<int, int>, int>> q;

const int dx[] = {-1,1,0,0};
const int dy[] = {0,0,-1,1};

void input() {
    cin >> n >> m;
    
    char temp;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> temp;
            board[i][j] = temp - '0';
        }
    }
}

void solve() {
    q.push({{ 1,1 }, 0});
    vis[1][1][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int crashed = q.front().second;
        q.pop();
        
        if(x==n && y==m){
            cout << vis[n][m][crashed] << endl;
            return;
        }
        
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<=0 || ny<=0 || nx>n || ny>m) continue;
            
            if(board[nx][ny] == 0 && vis[nx][ny][crashed] == 0){
                vis[nx][ny][crashed] = vis[x][y][crashed] + 1;
                q.push({{nx, ny}, crashed});
            }
            
            if (board[nx][ny] == 1 && crashed == 0) {
                vis[nx][ny][crashed + 1] = vis[x][y][crashed] + 1;
                q.push({ {nx,ny}, crashed + 1 });
            }
            
// incorrect way
//            if(board[ny][nx] == 1) {
//                if(crashed == 1) continue;
//                vis[nx][ny][crashed+1] = vis[nx][ny][crashed]+1;
//                q.push({{nx, ny}, crashed+1});
//            }
        }
    }
    cout << -1 << endl;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    input(); solve();
    return 0;
}
