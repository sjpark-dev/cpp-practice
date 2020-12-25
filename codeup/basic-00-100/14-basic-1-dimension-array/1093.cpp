#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, t, a[24] = {};
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> t;
        a[t]++;
    }

    for (i = 1; i < 24; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
