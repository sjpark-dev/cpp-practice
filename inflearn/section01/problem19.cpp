#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, a[101], cnt = 0, max;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> a[i];
    }

    max = a[n-1];

    for (i=n-2; i>=0; i--) {
        if (a[i] > max) {
            max = a[i];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
