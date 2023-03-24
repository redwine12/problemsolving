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

bool vis[101];
int board[101][101];
int m,n, x,y;
queue<int> q;

int bfs(int x){
    int count = 0;
    vis[x] = true;
    q.push(x);
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int i=1; i<=m; i++){
            if(!vis[i] && board[cur][i] == 1){
                vis[i] = true; count++;
                q.push(i);
            }
        }
    }
    return count;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    cin >> m >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        board[x][y] = board[y][x] = 1;
    }
    
    cout << bfs(1) << endl;
    
    
    return 0;
}
