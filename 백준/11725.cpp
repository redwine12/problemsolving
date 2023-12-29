#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int n, a,b;
vector<int> v[100001];
int ans[100001];
bool visited[100001];

void dfs(int num){
	visited[num] = true;
	for(int i=0; i<v[num].size(); i++){
		int next = v[num][i];
		if(visited[next] == false){
			ans[next] = num;
			dfs(next);
		}
	}
}

int main(int argc, const char * argv[]){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		v[a].push_back(b);
        v[b].push_back(a);
	}
	
	dfs(1);
	
	for(int i=2; i<=n; i++) cout << ans[i] << endl;
}
