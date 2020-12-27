#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[101][101], n, cnt = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=n-1; j>=0; j--) {
            a[i][j] = ++cnt;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
