#include <iostream>
using namespace std;

int n, a[11], total = 0;
bool flag = false;

void dfs(int level, int sum) {
    if (sum > total/2) return;
    if (flag) return;
    if (level == n+1) {
        if (sum == total-sum) {
            flag = true;
        }
    } else {
        dfs(level+1, sum+a[level]);
        dfs(level+1, sum);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
        total += a[i];
    }
    dfs(1, 0);
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
