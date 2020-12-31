#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b = 0;
    cin >> a >> b;
    b += (a % 10 * 10 + a / 10) * 2;
    b %= 100;
    cout << b << "\n";
    if (b<=50) cout << "GOOD";
    else cout << "OH MY GOD";
    return 0;
}
