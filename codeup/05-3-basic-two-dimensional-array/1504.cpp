#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, cnt = 1;
    cin >> n;
    for (i=0; i<n; i++) {
        if (i%2 == 0) {
            for (j=0; j<n; j++) {
                a[j][i] = cnt++;
            }
        } else {
            for (j=n-1; j>=0; j--) {
                a[j][i] = cnt++;
            }
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
