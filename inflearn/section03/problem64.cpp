#include <iostream>
using namespace std;

int n, g[21][21], ch[21], cnt = 0;

void dfs(int v) {
    int i;
    if (v==n) cnt++;
    else {
        for (i=1; i<=n; i++) {
            if (g[v][i]==1 && ch[i]==0) {
                ch[i] = 1;
                dfs(i);
                ch[i] = 0;
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
        g[a][b] = 1;
    }
    ch[1] = 1;
    dfs(1);
    cout << cnt;
    return 0;
}
