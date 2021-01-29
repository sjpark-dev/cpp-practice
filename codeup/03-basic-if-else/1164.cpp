#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a<=170 || b<=170 || c<=170) cout << "CRASH";
    else cout << "PASS";
    return 0;
}
