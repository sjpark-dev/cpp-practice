#include <iostream>
using namespace std;

int d[1001][1001], a[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, i, j, x1, x2, y1, y2, u;
    cin >> n >> m >> k;
    for (i=0; i<k; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> u;
        d[x1][y1] = d[x1][y1] + u;
        d[x2+1][y2+1] = d[x2+1][y2+1] + u;
        d[x1][y2+1] = d[x1][y2+1] - u;
        d[x2+1][y1] = d[x2+1][y1] - u;
    }
    for (i=1; i<n; i++) {
        for (j=1; j<m; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + d[i][j];
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << d[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
