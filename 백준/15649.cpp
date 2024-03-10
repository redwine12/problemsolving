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

void dfs(int k){
  if(k == m){
    for(int i=0; i<m; i++) cout << arr[i] << ' ';
    cout << endl; return;
  }

  for(int i=1; i<=n; i++){
    if(!vis[i]){
      arr[k] = i;
      vis[i] = true;
      dfs(k+1);
      vis[i] = 0;
    }
  }
}

void solve() {
  dfs(0);
}

int main(int argc, const char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(nullptr);

  input();
  solve();

  return 0;
}
