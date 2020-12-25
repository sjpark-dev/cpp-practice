#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, r, n, i;
    cin >> a >> r >> n;

    for (i = 1; i < n; i++) {
        a *= r;
    }

    cout << a;

    return 0;
}
