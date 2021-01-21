#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int e;
    int val;
    Edge(int a, int b) {
        e = a;
        val = b;
    }
    bool operator<(const Edge &b) const {
        return val > b.val;
    }
};

int ch[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, a, b, c, sum = 0;
    vector<pair<int, int>> graph[101];
    priority_queue<Edge> pq;
    cin >> n >> m;
    for (i=0; i<m; i++) {
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c));
    }
    pq.push(Edge(1, 0));
    while (!pq.empty()) {
        Edge tmp = pq.top();
        pq.pop();
        int v = tmp.e;
        int cost = tmp.val;
        if (ch[v]==0) {
            sum += cost;
            ch[v] = 1;
            for (i=0; i<graph[v].size(); i++) {
                pq.push(Edge(graph[v][i].first, graph[v][i].second));
            }
        }
    }
    cout << sum;
    return 0;
}
