#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w, a, b, i, j, n, m, sum, mx = -2147000000;
    cin >> h >> w;
    vector<vector<int>> v(h, vector<int>(w));
    for (i=0; i<h; i++) {
        for (j=0; j<w; j++) {
            cin >> v[i][j];
        }
    }
    cin >> a >> b;
    for (i=0; i<h-a+1; i++) {
        for (j=0; j<w-b+1; j++) {
            sum = 0;
            for (n=i; n<i+a; n++) {
                for (m=j; m<j+b; m++) {
                    sum += v[n][m];
                }
            }
            if (sum>mx) mx = sum;
        }
    }
    cout << mx;
    return 0;
}
