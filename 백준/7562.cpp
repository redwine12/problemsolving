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

int vis[305][305];
int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {2,1,-1,-2,-2,-1,1,2};
int t, l, x, y, xx, yy;
queue <pair<int, int >> q;

void bfs(int x, int y){
    q.push({x,y});
    vis[x][y] = 0;

    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int i=0; i<8; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
            if(vis[nx][ny] >= 0) continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            q.push({nx,ny});
        }
    }
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    

      cin >> t;
      while (t--) {
          
          cin >> l;
          for (int i = 0; i < l; i++) fill(vis[i], vis[i] + l, -1);
          
          cin >> x >> y >> xx >> yy;

          bfs(x,y);
          
          cout << vis[xx][yy] << "\n";
  }
    return 0;
}
