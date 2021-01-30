#include <iostream>
using namespace std;

int n, a[301], memo[301];

int f(int x) {
    if (x<1) return 0;
    if (memo[x]) return memo[x];
    if (x==1) return memo[x] = a[1];
    if (x==2) return memo[x] = a[1] + a[2];
    return memo[x] = a[x] + max(a[x-1]+f(x-3), f(x-2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    cout << f(n);
    return 0;
}
