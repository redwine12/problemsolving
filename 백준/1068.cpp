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
#define MAX 51

using namespace std;
typedef long long ll;

int n, num, del, root;
int cnt(0);
vector<int> v[MAX];
bool vis[MAX];

void input() { // 트리 생성
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        if(num == -1) root = i;
        else v[num].push_back(i);
    }
    cin >> del;
    vis[del] = true;
}

void dfs(int node) {
    if(node == del) return;
    vis[node] = true;
    
    bool flag = true;
//    if(v[node].size() == 0) cnt++; // 자식노드 없음 - 리프노드
    
    for(int i=0; i<v[node].size(); i++){
        if(!vis[v[node][i]]){
            dfs(v[node][i]);
            flag = false;
        }
    }
    if(flag) cnt++;
}

void solve() {
    dfs(root);
    
    cout << cnt << endl;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    input();
    solve();

}
