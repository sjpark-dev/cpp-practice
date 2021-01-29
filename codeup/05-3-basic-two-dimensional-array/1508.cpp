#include <iostream>
using namespace std;

int a[20][20];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i][0];
    }
    for (i=1; i<n; i++) {
        for (j=i; j<n; j++) {
            a[j][i] = a[j][i-1] - a[j-1][i-1];
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
