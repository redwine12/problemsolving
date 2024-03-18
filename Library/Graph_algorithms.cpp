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

using namespace std;
typedef long long ll;

#define INF numeric_limits<int>::max()

// 그래프 정점을 나타내는 구조체
struct Vertex {
    int id;
    vector<pair<int, int>> neighbors; // (인접 정점, 가중치)
};

// 그래프 클래스
class Graph {
private:
    vector<Vertex> vertices;

public:
    // 정점 추가
    void addVertex(int id) {
        vertices.push_back({id, {}});
    }

    // 간선 추가
    void addEdge(int from, int to, int weight) {
        for (auto& vertex : vertices) {
            if (vertex.id == from) {
                vertex.neighbors.push_back({to, weight});
                break;
            }
        }
    }

    // 최단 경로 (Dijkstra 알고리즘)
    vector<int> shortestPath(int start) {
        vector<int> dist(vertices.size(), INF);
        dist[start] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, start});

        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            if (d > dist[u])
                continue;

            for (auto neighbor : vertices[u].neighbors) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }

    // 최장 경로 (플로이드-워셜 알고리즘)
    vector<vector<int>> longestPath() {
        int V = vertices.size();
        vector<vector<int>> dist(V, vector<int>(V, -1));

        // 인접 행렬 초기화
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (i == j)
                    dist[i][j] = 0;
            }
        }

        // 간선 정보 반영
        for (int i = 0; i < V; ++i) {
            for (auto neighbor : vertices[i].neighbors) {
                int v = neighbor.first;
                int weight = neighbor.second;
                dist[i][v] = weight;
            }
        }

        // 플로이드-워셜 알고리즘
        for (int k = 0; k < V; ++k) {
            for (int i = 0; i < V; ++i) {
                for (int j = 0; j < V; ++j) {
                    if (dist[i][k] != -1 && dist[k][j] != -1 && dist[i][j] < dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
        return dist;
    }

    // 깊이 우선 탐색 (DFS)
    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        cout << v << " ";

        for (auto neighbor : vertices[v].neighbors) {
            int u = neighbor.first;
            if (!visited[u])
                DFSUtil(u, visited);
        }
    }

    void DFS(int start) {
        vector<bool> visited(vertices.size(), false);
        DFSUtil(start, visited);
    }

    // 너비 우선 탐색 (BFS)
    void BFS(int start) {
        vector<bool> visited(vertices.size(), false);
        queue<int> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            cout << v << " ";

            for (auto neighbor : vertices[v].neighbors) {
                int u = neighbor.first;
                if (!visited[u]) {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    Graph graph;

    // 그래프 생성
    for (int i = 0; i < 6; ++i) {
        graph.addVertex(i);
    }

    // 간선 추가
    graph.addEdge(0, 1, 5);
    graph.addEdge(0, 2, 3);
    graph.addEdge(1, 3, 6);
    graph.addEdge(1, 4, 2);
    graph.addEdge(2, 1, 1);
    graph.addEdge(2, 4, 6);
    graph.addEdge(3, 5, 1);
    graph.addEdge(4, 5, 4);

    // 최단 경로 (Dijkstra 알고리즘)
    vector<int> shortestPath = graph.shortestPath(0);
    cout << "최단 경로(0 시작):" << endl;
    for (int i = 0; i < shortestPath.size(); ++i) {
        cout << "Node " << i << ": " << shortestPath[i] << endl;
    }

    // 최장 경로 (플로이드-워셜 알고리즘)
    vector<vector<int>> longestDistances = graph.longestPath();
    cout << "최장경로: " << endl;
    for (int i = 0; i < longestDistances.size(); ++i) {
        for (int j = 0; j < longestDistances[i].size(); ++j) {
            if (longestDistances[i][j] == -1)
                cout << "INF\t";
            else
                cout << longestDistances[i][j] << "\t";
        }
        cout << endl;
    }

    // 깊이 우선 탐색 (DFS)
    cout << "DFS:" << endl;
    graph.DFS(0);
    cout << endl;

    // 너비 우선 탐색 (BFS)
    cout << "BFS:" << endl;
    graph.BFS(0);
    cout << endl;

    return 0;
}
