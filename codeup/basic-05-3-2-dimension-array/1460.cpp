#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[101][101], cnt = 0, i, j;
    cin >> n;

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << ++cnt << " ";
        }

        cout << "\n";
    }

    return 0;
}
