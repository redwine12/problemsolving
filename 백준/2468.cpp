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

int board[205][205];
bool vis[205][205];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int n;
queue<pair<int, int>> q;

void bfs(int x, int y, int limit){
    q.push({x,y});
    vis[x][y] = true;
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            
            if(nx < 0 | ny < 0 | nx >= n | ny >= n) continue;
            if(vis[nx][ny] == true || board[nx][ny] <= limit) continue;
            vis[nx][ny] = true;
            q.push({nx,ny});
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    int max = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(max < board[i][j]) max = board[i][j];
        }
    }
    
    int ans = -1, limit = 0;
    while(limit<=max){
        int count = 0;
        
        // 방문 초기화
        for(int i=0; i<n; i++)  fill(vis[i], vis[i]+n, 0);
        
        for(int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if(board[i][j] > limit && vis[i][j] != true){
                    bfs(i, j, limit);  count++; }
                
                else continue;
            }
        }
        
        if(count > ans) ans = count;
        limit++;
    }
    
    cout << ans << endl;
    return 0;
}
