#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[51] = {}, n, c, i;
    cin >> n;
    for (i=1; i<=n-1; i++) {
        cin >> c;
        a[c]++;
    }
    for (i=1; i<=n; i++) {
        if (a[i]==0) {
            cout << i;
            break;
        }
    }
    return 0;
}
