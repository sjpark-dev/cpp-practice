#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int mn, res = 1;
    mn = min(a, b);
    for (int i=2; i<=mn; i++) {
        if (a%i==0 && b%i==0) res = i;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
