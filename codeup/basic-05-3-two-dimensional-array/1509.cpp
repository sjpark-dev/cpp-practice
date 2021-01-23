#include <iostream>
using namespace std;

int a[11][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    for (i=0; i<11; i++) {
        for (j=0; j<10; j++) {
            cin >> a[i][j];
        }
    }
    for (i=0; i<10; i++) {
        if (a[10][i]==1) {
            for (j=9; j>=0; j--) {
                if (a[j][i]!=0) break;
            }
            if (j==-1) cout << i + 1 << " safe\n";
            else {
                if (a[j][i]>0) cout << i + 1 << " crash\n";
                else cout << i + 1 << " fall\n";
            }
        }
    }
    return 0;
}
