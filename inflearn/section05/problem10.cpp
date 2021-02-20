#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> dy(m+1, 500);
    dy[0] = 0;
    for (int i=0; i<n; i++) {
        for (int j=a[i]; j<=m; j++) {
            dy[j] = min(dy[j], dy[j-a[i]]+1);
        }
    }
    cout << dy[m];
    return 0;
}
