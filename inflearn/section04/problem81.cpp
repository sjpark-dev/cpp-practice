#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int s;
    int e;
    int val;
    Edge(int a, int b, int c) {
        s = a;
        e = b;
        val = c;
    }
};

int dist[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, a, b, c, s, e;
    vector<Edge> edges;
    cin >> n >> m;
    for (i=0; i<m; i++) {
        cin >> a >> b >> c;
        edges.push_back(Edge(a, b, c));
    }
    for (i=1; i<=n; i++) {
        dist[i] = 2147000000;
    }
    cin >> s >> e;
    dist[s] = 0;
    for (i=1; i<n; i++) {
        for (j=0; j<edges.size(); j++) {
            int u = edges[j].s;
            int v = edges[j].e;
            int w = edges[j].val;
            if (dist[u]!=2147000000 && dist[u]+w<dist[v]) dist[v] = dist[u] + w;
        }
    }
    for (j=0; j<edges.size(); j++) {
        int u = edges[j].s;
        int v = edges[j].e;
        int w = edges[j].val;
        if (dist[u]!=2147000000 && dist[u]+w<dist[v]) {
            cout << -1;
            return 0;
        }
    }
    cout << dist[e];
    return 0;
}
