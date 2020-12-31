#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (b<=a&&a<=c || c<=a&&a<=b) cout << a;
    else if (a<=b&&b<=c || c<=b&&b<=a) cout << b;
    else cout << c;
    return 0;
}
