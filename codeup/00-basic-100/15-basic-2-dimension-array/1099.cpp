#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[12][12] = {}, i, j, x = 2, y = 2;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            cin >> a[i][j];
        }
    }

    while (true) {
        if (a[x][y] == 2) {
            a[x][y] = 9;
            break;
        } else if (a[x][y + 1] != 1) {
            a[x][y++] = 9;
        } else if (a[x + 1][y] != 1) {
            a[x++][y] = 9;
        } else {
            a[x][y] = 9;
            break;
        }
    }

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            cout << a[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
