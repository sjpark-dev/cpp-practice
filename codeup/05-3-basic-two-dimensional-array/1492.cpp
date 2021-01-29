#include <iostream>
using namespace std;

int a[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (i=1; i<=n; i++) {
        a[i] = a[i] + a[i-1];
    }
    for (i=1; i<=n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
