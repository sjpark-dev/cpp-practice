#include <iostream>
#include <vector>
using namespace std;

int n, ch[21], cost = 2147000000;
vector<pair<int, int>> g[21];

void dfs(int v, int sum) {
    int i;
    if (v==n) {
        if (sum<cost) cost = sum;
    } else {
        for (i=0; i<g[v].size(); i++) {
            if (ch[g[v][i].first]==0) {
                ch[g[v][i].first] = 1;
                dfs(g[v][i].first, sum+g[v][i].second);
                ch[g[v][i].first] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, i, a, b, c;
    cin >> n >> m;
    for (i=0; i<m; i++) {
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
    }
    ch[1] = 1;
    dfs(1, 0);
    cout << cost;
    return 0;
}
