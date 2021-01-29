#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, p = 0, i = 0, j = -1, c = 1, cnt = 0;
    cin >> n >> m;
    while (cnt < n*m) {
        for (k=0; k<m-p; k++) {
            j += c;
            a[i][j] = ++cnt;
        }
        for (k=0; k<n-p-1; k++) {
            i += c;
            a[i][j] = ++cnt;
        }
        p++;
        c = -c;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
