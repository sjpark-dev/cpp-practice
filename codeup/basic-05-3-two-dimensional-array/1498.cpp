#include <iostream>
using namespace std;

int a[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, g, i, j, k, mn;
    cin >> n >> g;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    k = n / g;
    if (n%g != 0) k++;
    for (i=0; i<k; i++) {
        mn = 2147000000;
        for (j=0; j<g; j++) {
            if (g*i+j<n && a[g*i+j]<mn) mn = a[g*i+j];
        }
        a[i] = mn;
        cout << a[i] << " ";
    }
    return 0;
}
