#include <iostream>
#include <queue>
using namespace std;

int map[8][8], dis[8][8], dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

struct Loc {
    int x;
    int y;
    Loc (int a, int b) {
        x = a;
        y = b;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    queue<Loc> q; 
    for (i=1; i<=7; i++) {
        for (j=1; j<=7; j++) {
            cin >> map[i][j];
        }
    }
    q.push(Loc(1, 1));
    map[1][1] = 1;
    while (!q.empty()) {
        Loc tmp = q.front();
        q.pop();
        for (i=0; i<4; i++) {
            int xx = tmp.x + dx[i];
            int yy = tmp.y + dy[i];
            if (xx>=1 && xx<=7 && yy>=1 && yy<=7 && map[xx][yy]==0) {
                q.push(Loc(xx, yy));
                map[xx][yy] = 1;
                dis[xx][yy] = dis[tmp.x][tmp.y] + 1;
            }
        }
    }
    if (dis[7][7]==0) cout << -1;
    else cout << dis[7][7];
    return 0;
}
