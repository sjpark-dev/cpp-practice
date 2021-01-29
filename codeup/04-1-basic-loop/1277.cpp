#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, a;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        if (i==0) cout << a << " ";
        if (i == n/2) cout << a << " ";
        if (i == n-1) cout << a << " ";
    }
    return 0;
}
