#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, s = 0, e, mid;
    cin >> n >> m;
    e = n - 1;
    vector<int> a(n);
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (s<=e) {
        mid = (s+e) / 2;
        if (a[mid]==m) break;
        else if (a[mid]>m) e = mid - 1;
        else s = mid + 1;
    }
    cout << mid + 1;
    return 0;
}
