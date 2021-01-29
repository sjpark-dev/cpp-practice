#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j, cnt = 0;
    cin >> n >> m;
    for (i=n-1; i>=0; i--) {
        if ((n-1-i)%2==0) {
            for (j=m-1; j>=0; j--) {
                a[i][j] = ++cnt;
            }
        } else {
            for (j=0; j<m; j++) {
                a[i][j] = ++cnt;
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
