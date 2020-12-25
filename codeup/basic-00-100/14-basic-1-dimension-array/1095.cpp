#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[10001], n, i, min = 2147000000;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min) min = a[i];
    }

    cout << min;

    return 0;
}
