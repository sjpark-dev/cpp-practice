#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i ,j;
    cin >> n;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    for (i=n-1; i>=1; i--) {
        for (j=1; j<=i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
