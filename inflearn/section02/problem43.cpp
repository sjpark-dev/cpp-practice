#include <iostream>
#include <vector>
using namespace std;

vector<int> a;

int count(int s) {
    int cnt = 1, sum = 0, i;
    for(i=0; i<a.size(); i++) {
        if (a[i]+sum>s) {
            cnt++;
            sum = a[i];
        } else sum += a[i];
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, tmp, mx = 0, s, e = 0, mid, res;
    cin >> n >> m;
    for (i=0; i<n; i++) {
        cin >> tmp;
        e += tmp;
        if (tmp>mx) mx = tmp;
        a.push_back(tmp);
    }
    s = mx;
    while (s<=e) {
        mid = (s+e) / 2;
        if (count(mid)<=m) {
            res = mid;
            e = mid - 1;
        } else s = mid + 1;
    }
    cout << res;
    return 0;
}
