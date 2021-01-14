#include <iostream>
using namespace std;

int a[21][21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, x, y, w;
    cin >> n >> m;
    for (i=1; i<=m; i++) {
        cin >> x >> y >> w;
        a[x][y] = w;
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
