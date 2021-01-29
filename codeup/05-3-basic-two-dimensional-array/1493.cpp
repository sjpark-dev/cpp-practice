#include <iostream>
using namespace std;

int a[101][101], b[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, k, p, sum;
    cin >> n >> m;
    for (i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            cin >> a[i][j];
            b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
        }
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
