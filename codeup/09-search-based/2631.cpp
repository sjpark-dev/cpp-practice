#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, s, e, sum, cnt = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    s = 0;
    e = 1;
    sum = a[0];
    while (true) {
        if (sum<k) {
            if (e<n) {
                sum += a[e++];
            } else break;
        } else if (sum==k) {
            cnt++;
            sum -= a[s++];
        } else {
            sum -= a[s++];
        }
    }
    cout << cnt;
    return 0;
}
