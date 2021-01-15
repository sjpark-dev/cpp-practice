#include <iostream>
#include <vector>
using namespace std;

int n, ch[21], cnt = 0;
vector<int> g[21];

void dfs(int v) {
    int i;
    if (v==n) cnt++;
    else {
       for (i=0; i<g[v].size(); i++) {
           if (ch[g[v][i]]==0) {
               ch[g[v][i]] = 1;
               dfs(g[v][i]);
               ch[g[v][i]] = 0;
           }
       } 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, i, a, b;
    cin >> n >> m;
    for (i=1; i<=m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
    }
    ch[1] = 1;
    dfs(1);
    cout << cnt;
    return 0;
}
