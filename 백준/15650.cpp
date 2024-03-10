#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#pragma warning(disable : 4996)
#include <cmath>
#include <queue>
#include <sstream>
#include <string>
#define endl '\n'
#define MAX

using namespace std;
typedef long long ll;

int n, m;
int arr[10];
bool vis[10];

void input() {
  cin >> n >> m;
}

void dfs(int k, int cnt){
  if(cnt == m){
    for(int i=0; i<m; i++) cout << arr[i] << ' ';
    cout << endl; return;
  }

  for(int i=k; i<=n; i++){
    if(!vis[i]){
      arr[cnt] = i;
      vis[i] = true;
      dfs(i+1, cnt+1);
      vis[i] = false;
    }
  }
}

void solve() {
  dfs(1,0);
}

int main(int argc, const char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(nullptr);

  input();
  solve();

  return 0;
}
