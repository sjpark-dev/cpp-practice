#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, k, x1, y1, x2, y2, cnt = 0;
    for (k=0; k<4; k++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (i=x1; i<x2; i++) {
            for (j=y1; j<y2; j++) {
                a[i][j] = 1;
            }
        }
    }
    for (i=0; i<100; i++) {
        for (j=0; j<100; j++) {
            cnt += a[i][j];
        }
    }
    cout << cnt;
    return 0;
}
