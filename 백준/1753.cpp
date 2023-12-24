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
#define MAX

#define INF 987654321

using namespace std;
typedef long long ll;

int V, E, start;
int d[20001]; // 최소 비용 배열
vector<pair<int, int>> v[20001]; // idx -> .first 로 가는 .second 가중치 

void dijkstra(){
    d[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    
    while(!pq.empty()){
        // 이거 조심해야됨 -> 내림차순을 기준으로 우선순위가 정해지기때문에
        //                큐에 데이터 push해줄때 음수로 바꿔 추가해야됨
        int dis = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if(d[cur] < dis) continue;
        for(int i=0; i<v[cur].size(); i++){
            int next = v[cur][i].first;
            int next_dis = dis + v[cur][i].second;
            
            if(next_dis < d[next]){
                d[next] = next_dis;
                pq.push({-d[next], next});
            }
        }
    }
    for(int i=1; i<=V; i++){
        if(d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}


int main(int argc, const char * argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(nullptr);
    
    int a, b, weight;
    
    cin >> V >> E >> start;
    
    for(int i=0; i<E; i++){
        cin >> a >> b >> weight;
        v[a].push_back({b, weight});
    }
    
    for(int i=1; i<=V; i++) d[i] = INF;
    
    dijkstra();
    
    return 0;
}
