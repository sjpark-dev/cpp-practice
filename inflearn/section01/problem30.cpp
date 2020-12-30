#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, lt = 1, cur, rt, k = 1, res = 0;
    cin >> n;
    while (lt!=0) {
        lt = n / (k*10);
        cur = (n/k) % 10;
        rt = n % k;
        if (cur>3) res = res + (lt+1) * k;
        else if (cur==3) res = res + (lt*k) + (rt+1);
        else res = res + (lt*k);
        k *= 10;
    }
    cout << res;
    return 0;
}
