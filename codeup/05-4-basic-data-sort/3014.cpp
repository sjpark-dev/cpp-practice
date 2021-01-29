#include <iostream>
using namespace std;

int a[4500000], b[4500000], c[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n; i++) {
        c[a[i]]++;
    }
    for (i=1; i<100001; i++) {
        c[i] += c[i-1];
    }
    for (i=n-1; i>=0; i--) {
        b[--c[a[i]]] = a[i];
    }
    for (i=0; i<n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
