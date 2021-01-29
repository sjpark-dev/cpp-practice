#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, s, e, tmp, mn;
    cin >> n;
    vector<int> a(n);
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    s = i = 0;
    e = j = n - 1;
    mn = abs(a[s]+a[e]);
    while (s<e) {
        if (mn > abs(a[s]+a[e])) {
            mn = abs(a[s]+a[e]);
            i = s;
            j = e;
        }
        if (abs(a[s]+a[e]) > abs(a[s+1]+a[e])) s++;
        else if (abs(a[s]+a[e]) > abs(a[s]+a[e-1])) e--;
        else e--;
    }
    cout << a[i] << " " << a[j];
    return 0;
}
