#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, i, j;
    cin >> a >> b;

    for (i=a; i<=b;i++) {
        for (j=1; j<=9; j++) {
            cout << i << "*" << j << "=" << i*j << "\n";
        }
    }

    return 0;
}
