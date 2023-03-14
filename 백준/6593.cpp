#include <iostream>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'
#include <queue>

using namespace std;
typedef long long ll;

queue<pair<pair<int,int>,int>> q;

char board[35][35][35];
int vis[35][35][35];

int l,r,c, ans;

int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {0,0,0,0,1,-1};


void bfs(){
    bool flag = false;
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        
        if(board[x][y][z] == 'E'){
            ans = vis[x][y][z];
            flag = true;
            break;
        }
        
        for(int i=0; i<6; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if(nx > l || nx < 1 || ny > r || ny < 1 || nz > c || nz < 1) continue;
            if(board[nx][ny][nz] == '#' || vis[nx][ny][nz] >= 1) continue;
            q.push({{nx,ny},nz});
            vis[nx][ny][nz] = vis[x][y][z] + 1;
        }
    }
    if(flag) cout << "Escaped in " << ans << " minute(s)." << endl;
    else cout << "Trapped!" << endl;
}


void reset(){
    while(!q.empty()){
        q.pop();
    }
}
    

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    while(1){
        reset();
        cin >> l >> r >> c;
        for (int i = 1; i <= l; i++)
            for (int j = 1; j <= r; j++)
                fill(vis[i][j], vis[i][j]+c, 0);

        if(l==0 && r==0 && c==0) return 0;
        
        for(int i=1; i<=l; i++){
            for(int j=1; j<=r; j++){
                for(int k=1; k<=c; k++){
                    cin >> board[i][j][k];
                    if(board[i][j][k] == 'S'){
                        q.push({{i,j},k});
                        vis[i][j][k] = 0;
                    }
                }
            }
        }
        bfs();
    }
}
