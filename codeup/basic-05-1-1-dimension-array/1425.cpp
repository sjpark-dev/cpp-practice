#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, i, a[100];
    cin >> n >> c;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+1+n);
    for (i=1; i<=n; i++) {
        cout << a[i] << " ";
        if (i%c==0) cout << "\n";
    }
    return 0;
}
