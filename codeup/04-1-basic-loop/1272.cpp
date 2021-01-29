#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, h, i, b, s = 0, tmp, sum = 0;
    cin >> k >> h;
    if (k>h) b = k;
    else b = h;
    for (i=1; i<=b; i++) {
        if (i%2==1) tmp = ++s;
        else tmp = s * 10;
        if (k==i) sum += tmp;
        if (h==i) sum += tmp;
    }
    cout << sum;
    return 0;
}
