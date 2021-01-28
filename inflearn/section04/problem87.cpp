#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// solution 2
struct Loc {
    int x;
    int y;
    Loc (int a, int b) {
        x = a;
        y = b;
    }
};

int map[21][21], dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, k, cnt = 0;
    queue<Loc> q;
    cin >> n;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cin >> map[i][j];
        }
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if (map[i][j]==1) {
                q.push(Loc(i, j));
                map[i][j] = 0;
                while (!q.empty()) {
                    Loc tmp = q.front();
                    q.pop();
                    for (k=0; k<8; k++) {
                        int xx = tmp.x + dx[k];
                        int yy = tmp.y + dy[k];
                        if (map[xx][yy]==1) {
                            q.push(Loc(xx, yy));
                            map[xx][yy] = 0;
                        }
                    }
                }
                cnt++;       
            }
        }
    }
    cout << cnt;
    return 0;
}

// solution 1
// int ch[20][20], dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, i, j, k, a, cnt = 0;
//     vector<int> map[20];
//     queue<pair<int, int>> q;
//     cin >> n;
//     for (i=0; i<n; i++) {
//         for (j=0; j<n; j++) {
//             cin >> a;
//             map[i].push_back(a);
//         }
//     }
//     for (i=0; i<n; i++) {
//         for (j=0; j<n; j++) {
//             if (map[i][j]==1 && ch[i][j]==0) {
//                 cnt++;
//                 ch[i][j] = 1;
//                 q.push(make_pair(i, j));
//                 while (!q.empty()) {
//                     pair<int, int> tmp = q.front();
//                     q.pop();
//                     for (k=0; k<8; k++) {
//                         int x = tmp.first + dx[k];
//                         int y = tmp.second + dy[k];
//                         if (x>=0 && x<n && y>=0 && y<n && map[x][y]==1 && ch[x][y]==0) {
//                             ch[x][y] = 1;
//                             q.push(make_pair(x, y));
//                         }
//                     }
//                 }            
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }
