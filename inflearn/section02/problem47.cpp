#include <iostream>
#include <vector>
using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, k, flag, cnt = 0, dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    cin >> n;
    vector<vector<int>> v(n+2, vector<int>(n+2));
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            cin >> v[i][j];
        }
    }
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            flag = 0;
            for (k=0; k<4; k++) {
                if (v[i][j]<=v[i+dx[k]][j+dy[k]]) {
                    flag = 1;
                    break;
                }
            }
            if (flag==0) cnt++;
        }
    }
    cout << cnt;
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, i, j, k, cnt = 0;
//     cin >> n;
//     vector<vector<int>> v(n+2, vector<int>(n+2, 0));
//     for (i=1; i<=n; i++) {
//         for (j=1; j<=n; j++) {
//             cin >> v[i][j];
//         }
//     }
//     for (i=1; i<=n; i++) {
//         for (j=1; j<=n; j++) {
//             if (v[i][j]>v[i-1][j] && v[i][j]>v[i+1][j] && v[i][j]>v[i][j-1] && v[i][j]>v[i][j+1]) {
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }
