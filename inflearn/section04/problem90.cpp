#include <iostream>
#include <queue>
using namespace std;

int map[25][25], ch[25][25], dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};

struct State {
    int x, y, dis;
    State (int a, int b, int c) {
        x = a;
        y = b;
        dis = c;
    }
    bool operator<(const State &b) const {
        if (dis!=b.dis) return dis > b.dis;
        if (x!=b.x) return x > b.x;
        return y > b.y;
    }
};

struct Lion {
    int x, y, s, ate;
    void sizeUp() {
        s++;
        ate = 0;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, res = 0;
    Lion simba;
    priority_queue<State> q;
    cin >> n;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cin >> map[i][j];
            if (map[i][j]==9) {
                simba.x = i;
                simba.y = j;
                map[i][j] = 0;
            }
        }
    }
    simba.s = 2;
    simba.ate = 0;
    q.push(State(simba.x, simba.y, 0));
    ch[simba.x][simba.y] = 1;
    while (!q.empty()) {
        State tmp = q.top();
        q.pop();
        int x = tmp.x;
        int y = tmp.y;
        int z = tmp.dis;
        if (map[x][y]!=0 && map[x][y]<simba.s) {
            simba.x = x;
            simba.y = y;
            simba.ate++;
            if (simba.ate==simba.s) simba.sizeUp();
            map[x][y] = 0;
            for (i=0; i<n; i++) {
                for (j=0; j<n; j++) {
                    ch[i][j] = 0;
                }
            }
            ch[x][y] = 1;
            while (!q.empty()) q.pop();
            res = z;
        }
        for (i=0; i<4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (xx>=0 && xx<n && yy>=0 && yy<n && map[xx][yy]<=simba.s && ch[xx][yy]==0) {
                q.push(State(xx, yy, z+1));
                ch[xx][yy] = 1;
            } 
        }
    }
    cout << res;
    return 0;
}
