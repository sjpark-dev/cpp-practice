#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w, n, l, d, x, y, i, j, a[101][101] = {};
    cin >> h >> w;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> l >> d >> x >> y;

        for (j = 0; j < l; j++) {
            if (d == 0) a[x][y+j] = 1;
            else a[x+j][y] = 1;
        }
    }

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w; j++) {
            cout << a[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
