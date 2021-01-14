#include <iostream>
using namespace std;

int g[9][9], ch[9][9], cnt = 0, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    int i, xx, yy;
    if (x==7 && y==7) cnt++;
    else {
        for (i=0; i<4; i++) {
            xx = x + dx[i];
            yy = y + dy[i];
            if (xx<1 || xx>7 || yy<1 || yy>7) continue;
            if (g[xx][yy]==0 && ch[xx][yy]==0) {
                ch[xx][yy] = 1;
                dfs(xx, yy);
                ch[xx][yy] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    for (i=1; i<=7; i++) {
        for (j=1; j<=7; j++) {
            cin >> g[i][j];
        }
    }
    ch[1][1] = 1;
    dfs(1, 1);
    cout << cnt;
    return 0;
}
