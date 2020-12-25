#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, i;
    cin >> hex >> uppercase >> a;

    for (i = 1; i <= 15; i++) {
        cout << uppercase << hex << a << "*" << i << "=" << a * i << "\n";
    }

    return 0;
}
