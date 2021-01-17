#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, a, mx = -2137000000;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        if (a>mx) mx = a;
    }
    cout << mx;
    return 0;
}
