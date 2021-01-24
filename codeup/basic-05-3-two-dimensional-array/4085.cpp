#include <iostream>
using namespace std;

int a[101][101], b[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, y, x, i, j, tmp, mx = -2147000000;
    cin >> m >> n >> x >> y;
    for (i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            cin >> a[i][j];
            b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
        }
    }
    for (i=y; i<=n; i++) {
        for (j=x; j<=m; j++) {
            tmp = b[i][j] - b[i-y][j] - b[i][j-x] + b[i-y][j-x];
            if (tmp>mx) mx = tmp;
        }
    }
    cout << mx;
    return 0;
}
