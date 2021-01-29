#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    reload:
    cin >> a;

    if (a != 0) {
        cout << a << "\n";
        goto reload;
    }

    return 0;
}
