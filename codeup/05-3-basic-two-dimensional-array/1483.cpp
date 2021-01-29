#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, k, cnt = 0;
    cin >> n >> m;
    for (i=n-1; i>=-m+1; i--) {
        for (j=0; j<n; j++) {
            k = j - i;
            if (k>=0 && k<m) {
                a[j][k] = ++cnt;
            }
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
