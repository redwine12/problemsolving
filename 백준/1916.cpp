#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#pragma warning(disable:4996)
#include <string>
#include <sstream>
#include <math.h>
#include <queue>
#define endl '\n'
#define MAX 1001

using namespace std;
typedef long long ll;
const int INF = 1e9;

int n, m, start, fin, cost;
vector<pair<int, int>> v[MAX];
int dist[MAX];

priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;


void input(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> start >> fin >> cost;
        v[start].push_back({fin, cost});
    }
    cin >> start >> fin;
    fill_n(dist, MAX, INF);
    dist[start] = 0;

}

void solve() {
    pq.push({ 0, start });

    while (!pq.empty()) {
        int cur = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        if (cost > dist[cur]) {
            continue;
        }

        for (int i = 0; i < v[cur].size(); i++) {
            int next = v[cur][i].first;
            int next_cost = dist[cur] + v[cur][i].second;

            if (next_cost < dist[next]) {
                dist[next] = next_cost;
                pq.push({ next_cost,next });
            }
        }
    }

    cout << dist[fin] << endl;
}

int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);

    input();

    solve();

    return 0;
}
