#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i = -1, j, c = 1, cnt, k, p = 0;
    cin >> n >> m;
    j = m - 1;
    cnt = n * m;
    while (cnt>0) {
        for (k=0; k<n-p; k++) {
            i += c;
            a[i][j] = cnt--;
        }
        c = -c;
        for (k=0; k<m-p-1; k++) {
            j += c;
            a[i][j] = cnt--;
        }
        p++;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
