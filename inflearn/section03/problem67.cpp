#include <iostream>
using namespace std;

int n, g[21][21], ch[21], mn = 2147000000;

void dfs(int v, int sum) {
    int i;
    if (v==n) {
        if (sum<mn) mn = sum;
    } else {
        for (i=1; i<=n; i++) {
            if (g[v][i]>0 && ch[i]==0) {
                ch[i] = 1;
                dfs(i, sum+g[v][i]);
                ch[i] = 0;
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
        g[a][b] = c;
    }
    ch[1] = 1;
    dfs(1, 0);
    cout << mn;
    return 0;
}
