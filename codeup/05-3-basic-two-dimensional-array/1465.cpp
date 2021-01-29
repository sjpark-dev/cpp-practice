#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a[101][101], cnt = 0, i, j;
    cin >> n >> m;
    for (i=n-1; i>=0; i--) {
        for (j=0; j<m; j++) {
            cnt++;
            a[i][j] = cnt;
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
