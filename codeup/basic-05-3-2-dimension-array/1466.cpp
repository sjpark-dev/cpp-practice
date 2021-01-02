#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[101][101], n, m, cnt = 0;
    cin >> n >> m;
    for (int i=m-1; i>=0; i--) {
        for (int j=n-1; j>=0; j--) {
            a[j][i] = ++cnt;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
