#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, r, i, j, k;
    cin >> h >> r;
    for (i=0; i<r; i++) {
        for (j=0; j<h; j++) {
            for (k=0; k<j; k++) {
                cout << " ";
            }
            cout << "*\n";
        }
        for (j=h-2; j>=0; j--) {
            for (k=0; k<j; k++) {
                cout << " ";
            }
            cout << "*\n";
        }
    }
    return 0;
}
