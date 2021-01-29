#include <iostream>
using namespace std;

int a[99][99];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, k, cnt = 1;
    cin >> n;
    for (i=n-1; i<2*n-1; i++) {
        if ((n-1-i)%2==0) {
            for (j=n-1; j>=0; j--) {
                k = i - j;
                if (k>=0 && k<n) {
                    a[j][k] = cnt++;
                }
            }
        } else {
            for (j=0; j<n; j++) {
                k = i - j;
                if (k>=0 && k<n) {
                    a[j][k] = cnt++;
                }
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
