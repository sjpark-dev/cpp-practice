#include <iostream>
using namespace std;

int n, a[11], m, cnt = 0;

void dfs(int level, int sum) {
    if (level == n+1) {
        if (sum==m) cnt++;
    } else {
        dfs(level+1, sum+a[level]);
        dfs(level+1, sum);
        dfs(level+1, sum-a[level]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    cin >> n >> m;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    dfs(1, 0);
    if (cnt==0) cout << -1;
    else cout << cnt;
    return 0;
}
