#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a;

    do {
        cin >> a;
        cout << a << "\n";
    } while (a != 'q');

    return 0;
}
