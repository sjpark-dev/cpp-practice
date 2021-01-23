#include <iostream>
using namespace std;

int a[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n/2; i++) {
        a[i] = min(a[2*i], a[2*i+1]);
        cout << a[i] << " ";
    }
    return 0;
}
