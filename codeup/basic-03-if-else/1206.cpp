#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a%b == 0) cout << b << "*" << a / b << "=" << a;
    else if (b%a == 0) cout << a << "*" << b / a << "=" << b;
    else cout << "none";
    return 0;
}
