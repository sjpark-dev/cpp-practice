#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    cout << a;
    if (b<10) cout << 0 << b;
    else cout << b;
    if (c<10) cout << 0 << 0 << c;
    else if (c<100) cout << 0 << c;
    else cout << c;
    return 0;
}
