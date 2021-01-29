#include <iostream>
using namespace std;

int a[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, g, i, j, k, mx;
    cin >> n >> g;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    k = n / g;
    if (n%g != 0) k++;
    for (i=0; i<k; i++) {
        mx = -2147000000;
        for (j=0; j<g; j++) {
            if (g*i+j<n && a[g*i+j]>mx) mx = a[g*i+j];
        }
        a[i] = mx;
        cout << a[i] << " ";
    }
    return 0;
}
