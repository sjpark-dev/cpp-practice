#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, d, n, i;
    cin >> a >> d >> n;

    for (i = 1; i < n; i++) {
        a += d;
    }

    cout << a;

    return 0;
}
