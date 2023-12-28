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

queue<pair<int, int>> q;
vector<int> v;

int board[105][105];
bool vis[105][105];
int n, m, k;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void bfs(int x, int y){
    int count = 0;
    q.push({x, y});
    vis[x][y] = true;
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(board[nx][ny] > 0 || vis[nx][ny] == true) continue;
            q.push({nx, ny});
            vis[nx][ny] = true;
            count++;
        }
    }
    v.push_back(count);
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m >> n >> k;
    while(k--){
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                vis[i][j] = true;
            }
        }
    }
    
    // 보드 초기화
    for(int i=0; i<n; i++) fill(board[i], board[i]+m, 0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == 0 && vis[i][j] != true){
                bfs(i,j);
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    cout << v.size() << endl;
    for(auto c : v) cout << c+1 << endl;
    
    
    return 0;
}
