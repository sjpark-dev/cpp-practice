#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;
int n;

int count(int dist) {
    int cnt = 1, prev = 0, i;
    for (i=1; i<n; i++) {
        if (a[i]-a[prev]>=dist) {
            cnt++;
            prev = i;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, i, tmp, s = 1, e, mid, res;
    cin >> n >> c;
    for (i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    e = a[n-1] - a[0];
    while (s<=e) {
        mid = (s+e) / 2;
        if (count(mid)>=c) {
            res = mid;
            s = mid + 1;
        } else e = mid - 1;
    }
    cout << res;
    return 0;
}
