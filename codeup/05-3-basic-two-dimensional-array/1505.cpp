#include <iostream>
using namespace std;

int a[50][50];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i = 0, j = -1, k, p = 0, c = 1, cnt = 1;
    cin >> n;
    while (cnt<=n*n) {
        for (k=0; k<n-p; k++) {
            j += c;
            a[i][j] = cnt++;
        }
        for (k=0; k<n-p-1; k++) {
            i += c;
            a[i][j] = cnt++;
        }
        p++;
        c = -c;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
