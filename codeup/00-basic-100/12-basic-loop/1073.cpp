#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 1;

    while (a != 0) {
        cin >> a;
        if (a != 0) cout << a << "\n";
    }

    return 0;
}
