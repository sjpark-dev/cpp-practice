#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, res = 0;
    cin >> n;
    vector<int> a(n+1), dy(n+1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    dy[1] = 1;
    for (int i=2; i<=n; i++) {
        int mx = 0;
        for (int j=i-1; j>=1; j--) {
            if (a[j]<a[i] && dy[j]>mx) mx = dy[j];
        }
        dy[i] = mx + 1;
        if (dy[i]>res) res = dy[i];
    }
    cout << res;
    return 0;
}
