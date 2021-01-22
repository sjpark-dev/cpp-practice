#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int vex;
    int dis;
    Edge(int a, int b) {
        vex = a;
        dis = b;
    }
    bool operator<(const Edge &b) const {
        return dis > b.dis;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, a, b, c;
    vector<pair<int, int>> graph[21];
    priority_queue<Edge> pq;
    cin >> n >> m;
    vector<int> dist(n+1, 2147000000);
    for (i=0; i<m; i++) {
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
    }
    dist[1] = 0;
    pq.push(Edge(1, 0));
    while (!pq.empty()) {
        int now = pq.top().vex;
        int cost = pq.top().dis;
        pq.pop();
        if (cost>dist[now]) continue;
        for (i=0; i<graph[now].size(); i++) {
            int next = graph[now][i].first;
            int nextDis = cost + graph[now][i].second;
            if (dist[next]>nextDis) {
                dist[next] = nextDis;
                pq.push(Edge(next, nextDis));
            }
        }
    }
    for (i=2; i<=n; i++) {
        if (dist[i]!=2147000000) cout << i << " : " << dist[i] << "\n";
        else cout << i << " : impossible\n";
    }
    return 0;
}

// solution 1
// int ch[21], t, mn;
// vector<pair<int, int>> graph[21];

// void dfs(int v, int sum) {
//     int i;
//     if (v==t) {
//         if (sum<mn) mn = sum;
//     } else {
//         for (i=0; i<graph[v].size(); i++) {
//             if (ch[graph[v][i].first]==0) {
//                 ch[graph[v][i].first] = 1;
//                 dfs(graph[v][i].first, sum+graph[v][i].second);
//                 ch[graph[v][i].first] = 0;
//             }
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, m, i, a, b, c;
//     cin >> n >> m;
//     for (i=0; i<m; i++) {
//         cin >> a >> b >> c;
//         graph[a].push_back(make_pair(b, c));
//     }
//     ch[1] = 1;
//     for (i=2; i<=n; i++) {
//         t = i;
//         mn = 2147000000;
//         dfs(1, 0);
//         cout << i << " : ";
//         if (mn==2147000000) cout << "impossible\n";
//         else cout << mn << "\n";
//     }
//     return 0;
// }
