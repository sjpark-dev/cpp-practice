#include <iostream>
using namespace std;

int a[10000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, tmp;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=n-2; i>=0; i--) {
        for (j=0; j<=i; j++) {
            if (a[j]>a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for (i=0; i<n; i++) {
        cout << a[i] <<"\n";
    }
    return 0;
}
