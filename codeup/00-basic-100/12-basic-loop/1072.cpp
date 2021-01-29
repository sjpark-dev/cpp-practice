#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a;
    reget:
    cin >> b;
    cout << b << "\n";
    if (--a != 0) goto reget;

    return 0;
}
