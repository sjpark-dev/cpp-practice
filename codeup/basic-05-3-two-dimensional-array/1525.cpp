#include <iostream>
using namespace std;

int a[10][10], b[10][10], dx[8], dy[8];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, k, x, y, xx, yy;
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            cin >> a[i][j];
        }
    }
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (a[i][j]>0) {
                for (k=1; k<=a[i][j]; k++) {
                    if (i-k<0 || i-k>9 || a[i-k][j]==-1) break;
                    b[i-k][j] = -2;
                }
                for (k=1; k<=a[i][j]; k++) {
                    if (i+k<0 || i+k>9 || a[i+k][j]==-1) break;
                    b[i+k][j] = -2;
                }
                for (k=1; k<=a[i][j]; k++) {
                    if (j-k<0 || j-k>9 || a[i][j-k]==-1) break;
                    b[i][j-k] = -2;
                }
                for (k=1; k<=a[i][j]; k++) {
                    if (j+k<0 || j+k>9 || a[i][j+k]==-1) break;
                    b[i][j+k] = -2;
                }
                b[i][j] = -2;
            } else if (a[i][j]==-1) b[i][j] = -1;
        }
    }
    cin >> n;
    for (k=0; k<n; k++) {
        cin >> x >> y;
        if (b[x-1][y-1]==0) b[x-1][y-1] = k + 1;
        dx[k] = x - 1;
        dy[k] = y - 1;
    }
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Character Information\n";
    for (k=0; k<n; k++) {
        if (b[dx[k]][dy[k]]==k+1) cout << "player " << k + 1 << " survive\n";
        else cout << "player " << k + 1 << " dead\n";
    }
    return 0;
}
