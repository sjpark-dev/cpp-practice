#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    for (i=1; i<=n; i+=2) {
        for (j=1; j<=(n-i+1)/2; j++) {
            cout << " ";
        }
        for (j=1; j<=i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
