#include <iostream>
using namespace std;

int a[50][50];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, cnt = 1;
    cin >> n;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            a[i][j] = cnt++;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
