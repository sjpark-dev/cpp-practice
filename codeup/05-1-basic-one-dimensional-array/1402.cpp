#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[1001], n, i;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> a[i];
    }

    for (i=n-1; i>=0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}
