#include <iostream>

using namespace std;

int digit_sum(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, a, mn = 0, tmp, max = -2147000000;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a;
        tmp = digit_sum(a);
        
        if (tmp > max) {
            max = tmp;
            mn = a;
        } else if (tmp == max) {
            if (mn < a) mn = a;
        }
    }

    cout << mn;

    return 0;
}
