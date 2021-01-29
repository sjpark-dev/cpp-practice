#include <iostream>
using namespace std;

int a[25][25], b[25][25], dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, k, x, y, cnt;
    for (i=0; i<25; i++) {
        for (j=0; j<25; j++) {
            cin >> a[i][j];
        }
    }
    for (i=0; i<25; i++) {
        for (j=0; j<25; j++) {
            cnt = 0;
            for (k=0; k<8; k++) {
                x = i + dx[k];
                y = j + dy[k];
                if (x>=0 && x<25 && y>=0 && y<25 && a[x][y]==1) cnt++;
            }
            if (a[i][j]==0 && cnt==3) b[i][j] = 1;
            else if (a[i][j]==1 && (cnt<=1||cnt>=4)) b[i][j] = 0;
            else if (a[i][j]==1 && (cnt==2||cnt==3)) b[i][j] = 1;
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
