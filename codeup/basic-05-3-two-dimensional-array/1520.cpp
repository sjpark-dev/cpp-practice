#include <iostream>
using namespace std;

int g[170][170], h[170][170], dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, x, y, z, k, i, j, p, cnt, n, m, q;
    cin >> a >> b >> x >> y >> z;
    for (i=0; i<a; i++) {
        for (j=0; j<b; j++) {
            cin >> g[i][j];
        }
    }
    cin >> k;
    for (p=0; p<k; p++) {
        for (i=0; i<a; i++) {
            for (j=0; j<b; j++) {
                cnt = 0;
                for (q=0; q<8; q++) {
                    n = i + dx[q];
                    m = j + dy[q];
                    if (n>=0 && n<a && m>=0 && m<b && g[n][m]==1) cnt++;
                }
                if (g[i][j]==0 && cnt==x) h[i][j] = 1;
                else if (g[i][j]==1 && (cnt<y||cnt>=z)) h[i][j] = 0;
                else if (g[i][j]==1 && (cnt>=y&&cnt<z)) h[i][j] = 1;
            }
        }
        for (i=0; i<a; i++) {
            for (j=0; j<b; j++) {
                g[i][j] = h[i][j];
            }
        }
    }
    for (i=0; i<a; i++) {
            for (j=0; j<b; j++) {
                cout << g[i][j] << " ";
            }
            cout << "\n";
        }
    return 0;
}
