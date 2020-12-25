#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, i, j, a[21][21] = {};
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }

    for (i = 1; i <= 19; i++) {
        for (j = 1; j <= 19; j++) {
            cout << a[i][j] << " ";
        }
        
        cout << "\n";
    }

    return 0;
}
