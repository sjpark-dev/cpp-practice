#include <iostream>
using namespace std;

int prime(int x) {
    int i;
    for (i=2; i*i<=x; i++) {
        if (x%i==0) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=2; i<n; i++) {
        if (prime(i)) {
            if (n%i==0 && prime(n/i)) {
                cout << i << " " << n/i;
                return 0;
            } 
        }
    }
    cout << "wrong number";
    return 0;
}
