#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w, n, m, i, j, tmp, mx = -2147000000;
    cin >> h >> w;
    vector<vector<int>> a(h+1, vector<int>(w+1));
    vector<vector<int>> dy(h+1, vector<int>(w+1));
    for (i=1; i<=h; i++) {
        for (j=1; j<=w; j++) {
            cin >> a[i][j];
            dy[i][j] = dy[i-1][j] + dy[i][j-1] - dy[i-1][j-1] + a[i][j];
        }
    }
    cin >> n >> m;
    for (i=n; i<=h; i++) {
        for (j=m; j<=w; j++) {
            tmp = dy[i][j] - dy[i-n][j] - dy[i][j-m] + dy[i-n][j-m];
            if (tmp>mx) mx = tmp;
        }
    }
    cout << mx;
    return 0;
}
