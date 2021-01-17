#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=2; i<n; i++) {
        if (n%i==0) {
            cout << "not prime";
            return 0;
        }
    }
    cout << "prime";
    return 0;
}
