#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, m, d, n, i;
    cin >> a >> m >> d >> n;

    for (i = 1; i < n; i++) {
        a = a * m + d;
    }

    cout << a;

    return 0;
}
