#include <iostream>
using namespace std;

int a[100][100], dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, i, j, k, p = 1, cnt;
    cin >> n >> x >> y;
    a[x-1][y-1] = 1;
    while (true) {
        cnt = 0;
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (a[i][j]!=0) cnt++;
                if (a[i][j]==p) {
                    for (k=0; k<4; k++) {
                        int xx = i + dx[k];
                        int yy = j + dy[k];
                        if (xx>=0 && xx<n && yy>=0 && yy<n && a[xx][yy]==0) {
                            a[xx][yy] = p + 1;
                        }
                    }
                }
            }
        }
        if (cnt==n*n) break;
        p++;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
