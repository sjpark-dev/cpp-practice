#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a % 2 == 0) cout << "even\n";
    else cout << "odd\n";

    if (b % 2 == 0) cout << "even\n";
    else cout << "odd\n";

    if (c % 2 == 0) cout << "even\n";
    else cout << "odd\n";

    return 0;
}
