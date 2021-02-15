#include <iostream>
using namespace std;

int a[20][20], dy[20][20];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    dy[0][0] = a[0][0];
    for (int i=1; i<n; i++) {
        dy[0][i] = dy[0][i-1] + a[0][i];
        dy[i][0] = dy[i-1][0] + a[i][0];
    }
    for (int i=1; i<n; i++) {
        for (int j=1; j<n; j++) {
            dy[i][j] = min(dy[i-1][j], dy[i][j-1]) + a[i][j];
        }
    }
    cout << dy[n-1][n-1];
    return 0;
}
