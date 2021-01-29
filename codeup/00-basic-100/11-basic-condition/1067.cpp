#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    if (a > 0) {
        cout << "plus\n";

        if (a % 2 == 0) cout << "even\n";
        else cout << "odd\n"; 
    } else {
        cout << "minus\n";

        if (a % 2 == 0) cout << "even\n";
        else cout << "odd\n"; 
    }

    return 0;
}
