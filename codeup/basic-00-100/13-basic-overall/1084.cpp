#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, g, b, i, j, k, cnt = 0;
    cin >> r >> g >> b;

    for (i = 0; i < r; i++) {
        for (j = 0; j < g; j++) {
            for (k = 0; k < b; k++) {
                cout << i << " " << j << " " << k << "\n";
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
