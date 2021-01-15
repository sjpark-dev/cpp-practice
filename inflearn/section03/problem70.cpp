#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int ch[21], dis[21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, a, b, x;
    vector<int> g[21];
    queue<int> q;
    cin >> n >> m;
    for (i=0; i<m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
    }
    ch[1] = 1;
    q.push(1);
    while (!q.empty()) {
        x = q.front();
        q.pop();
        for (i=0; i<g[x].size(); i++) {
            if (ch[g[x][i]]==0) {
                ch[g[x][i]] = 1;
                q.push(g[x][i]);
                dis[g[x][i]] = dis[x] + 1;
            }
        }
    }
    for (i=2; i<=n; i++) {
        cout << i << " : " << dis[i] << "\n";
    }
    return 0;
}
