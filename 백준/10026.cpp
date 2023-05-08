#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <sstream>
#include <math.h>
#define endl '\n'
#include<queue>

#define X first
#define Y second

using namespace std;
typedef long long ll;

bool vis[101][101];
char board[101][101];
int n;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void allvis(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }
}

void redvis(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 'G') board[i][j] = 'R';
        }
    }
}

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(vis[nx][ny] == true || board[nx][ny] != board[x][y]) continue;
            
            vis[nx][ny] = true;
            q.push({nx, ny});
        }
    }
    
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> n;
    
    // 적록색약 아닌 사람
    allvis(n);
    
    int cnt1=0;
    
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(vis[i][j] == false){
                bfs(i,j);
                cnt1++;
            }
        }
    }
    
    // 방문 배열 초기화
    for(int i=0; i<n; i++){
        fill(vis[i], vis[i]+n, false);
    }
    
    
    // 적록색약
    redvis(n);
    
    int cnt2 = 0;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(vis[i][j] == false){
                bfs(i,j);
                cnt2++;
            }
        }
    }

    cout << cnt1 << '\n' << cnt2 << endl;
    
    return 0;
}
