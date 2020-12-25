#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a = 'a', b;
    cin >> b;

    do {
        cout << a << " ";
        a++;
    } while (a < b + 1);

    return 0;
}
