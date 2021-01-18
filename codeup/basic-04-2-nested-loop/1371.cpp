#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    for (i=0; i<n; i++) {
        for (j=n-1-i; j>0; j--) {
            cout << " ";
        }
        cout << "*";
        for (j=0; j<i*2; j++) {
            cout << " ";
        }
        cout << "*\n";
    }
    for (i=n-1; i>=0; i--) {
        for (j=n-1-i; j>0; j--) {
            cout << " ";
        }
        cout << "*";
        for (j=0; j<i*2; j++) {
            cout << " ";
        }
        cout << "*\n";
    }
    return 0;
}
