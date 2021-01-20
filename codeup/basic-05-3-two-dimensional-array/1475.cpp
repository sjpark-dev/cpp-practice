#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, cnt = 0;
    cin >> n >> m;
    for (i=m-1; i>=0; i--) {
        if ((m-1-i)%2==0) {
            for (j=0; j<n; j++) {
                a[j][i] = ++cnt;
            }
        } else {
            for (j=n-1; j>=0; j--) {
                a[j][i] = ++cnt;
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
