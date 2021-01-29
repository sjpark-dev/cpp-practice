#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, tmp, a[10000001] = {};
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        a[tmp]++;
    }
    cin >> m;
    for (i=0; i<m; i++) {
        cin >> tmp;
        if (a[tmp]!=0) cout << 1 << " ";
        else cout << 0 << " ";
    }
    return 0;
}
