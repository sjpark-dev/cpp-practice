#include <iostream>
using namespace std;

int a[10][10], dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c, i, j, x, y, cnt = 0;
    for (i=1; i<10; i++) {
        for (j=1; j<10; j++) {
            cin >> a[i][j];
        }
    }
    cin >> r >> c;
    if (a[r][c]==1) {
        cout << -1;
        return 0;
    }
    for (i=0; i<8; i++) {
        x = r + dx[i];
        y = c + dy[i];
        if (x>=1 && x<10 && y>=1 && y<10 && a[x][y]==1) cnt++;
    }
    cout << cnt;
    return 0;
}
