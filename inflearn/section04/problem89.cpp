#include <iostream>
#include <queue>
using namespace std;

int box[1000][1000], dis[1000][1000], dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, i, j, res = -2147000000;
    queue<pair<int, int>> q;
    cin >> m >> n;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cin >> box[i][j];
            if (box[i][j]==1) q.push(make_pair(i, j));
        }
    }
    while(!q.empty()) {
        pair<int, int> tmp = q.front();
        q.pop();
        for (i=0; i<4; i++) {
            int x = tmp.first + dx[i];
            int y = tmp.second + dy[i];
            if (x>=0 && x<n && y>=0 && y<m && box[x][y]==0) {
                q.push(make_pair(x, y));
                box[x][y] = 1;
                dis[x][y] = dis[tmp.first][tmp.second] + 1;
            }
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (box[i][j]==0) {
                cout << -1;
                return 0;
            }
            if (dis[i][j]>res) res = dis[i][j];
        }
    }
    cout << res;
    return 0;
}
