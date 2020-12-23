#include <iostream>

using namespace std;

// solution 2
int main() {
    int n, m, i, sum = 0;
    cin >> n >> m;

    for (i = 1; i <= n; i++) {
        if (i % m == 0) {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}

/* solution 1
int main() {
    int n, m, x, sum = 0;
    cin >> n >> m;
    x = m;

    while (x <= n) {
        sum += x;
        x = x + m;
    }

    cout << sum;

    return 0;
}
*/
