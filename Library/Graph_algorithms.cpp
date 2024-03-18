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

// �׷��� ������ ��Ÿ���� ����ü
struct Vertex {
    int id;
    vector<pair<int, int>> neighbors; // (���� ����, ����ġ)
};

// �׷��� Ŭ����
class Graph {
private:
    vector<Vertex> vertices;

public:
    // ���� �߰�
    void addVertex(int id) {
        vertices.push_back({id, {}});
    }

    // ���� �߰�
    void addEdge(int from, int to, int weight) {
        for (auto& vertex : vertices) {
            if (vertex.id == from) {
                vertex.neighbors.push_back({to, weight});
                break;
            }
        }
    }

    // �ִ� ��� (Dijkstra �˰���)
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

    // ���� ��� (�÷��̵�-���� �˰���)
    vector<vector<int>> longestPath() {
        int V = vertices.size();
        vector<vector<int>> dist(V, vector<int>(V, -1));

        // ���� ��� �ʱ�ȭ
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (i == j)
                    dist[i][j] = 0;
            }
        }

        // ���� ���� �ݿ�
        for (int i = 0; i < V; ++i) {
            for (auto neighbor : vertices[i].neighbors) {
                int v = neighbor.first;
                int weight = neighbor.second;
                dist[i][v] = weight;
            }
        }

        // �÷��̵�-���� �˰���
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

    // ���� �켱 Ž�� (DFS)
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

    // �ʺ� �켱 Ž�� (BFS)
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

    // �׷��� ����
    for (int i = 0; i < 6; ++i) {
        graph.addVertex(i);
    }

    // ���� �߰�
    graph.addEdge(0, 1, 5);
    graph.addEdge(0, 2, 3);
    graph.addEdge(1, 3, 6);
    graph.addEdge(1, 4, 2);
    graph.addEdge(2, 1, 1);
    graph.addEdge(2, 4, 6);
    graph.addEdge(3, 5, 1);
    graph.addEdge(4, 5, 4);

    // �ִ� ��� (Dijkstra �˰���)
    vector<int> shortestPath = graph.shortestPath(0);
    cout << "�ִ� ���(0 ����):" << endl;
    for (int i = 0; i < shortestPath.size(); ++i) {
        cout << "Node " << i << ": " << shortestPath[i] << endl;
    }

    // ���� ��� (�÷��̵�-���� �˰���)
    vector<vector<int>> longestDistances = graph.longestPath();
    cout << "������: " << endl;
    for (int i = 0; i < longestDistances.size(); ++i) {
        for (int j = 0; j < longestDistances[i].size(); ++j) {
            if (longestDistances[i][j] == -1)
                cout << "INF\t";
            else
                cout << longestDistances[i][j] << "\t";
        }
        cout << endl;
    }

    // ���� �켱 Ž�� (DFS)
    cout << "DFS:" << endl;
    graph.DFS(0);
    cout << endl;

    // �ʺ� �켱 Ž�� (BFS)
    cout << "BFS:" << endl;
    graph.BFS(0);
    cout << endl;

    return 0;
}
