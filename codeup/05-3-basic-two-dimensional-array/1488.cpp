#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, c = -1, cnt = 0, k, p = 0;
    cin >> n >> m;
    i = n - 1;
    j = m;
    while (cnt < n*m) {
        for (k=0; k<m-p; k++) {
            j += c;
            a[i][j] = ++cnt;
        }
        for (k=0; k<n-p-1; k++) {
            i += c;
            a[i][j] = ++cnt;
        }
        c = -c;
        p++;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
