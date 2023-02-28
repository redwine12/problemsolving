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

using namespace std;
typedef long long ll;

char board[28][28];
bool vis[28][28];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int m;
queue<pair<int, int>> q;

vector<int> v;

void bfs(){
    int count = 0;
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        vis[cur.X][cur.Y] = true;
        for(int i=0; i<4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx<0 || ny<0 || nx>=m || ny>=m) continue;
            if(vis[nx][ny] == true || board[nx][ny] != '1') continue;
            vis[nx][ny] = true;
            q.push({nx, ny}); count++;
        }
    }
    v.push_back(count);
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m;
    
    for(int i=0; i<m; i++)
        for(int j=0; j<m; j++)
            cin >> board[i][j];
    
    
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(board[i][j] == '1' && vis[i][j] != true){
                q.push({i,j});
                bfs();
            }
        }
    }
        
    sort(v.begin(), v.end());
        
    cout << v.size() << endl;
    for(auto c:v) cout << c+1 << endl;
        
    return 0;
    
}

