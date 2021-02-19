#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, w, v;
    cin >> n >> m;
    vector<int> dy(m+1);
    for (int i=0; i<n; i++) {
        cin >> w >> v;
        for (int j=w; j<=m; j++) {
            dy[j] = max(dy[j], dy[j-w]+v);
        }
    }
    cout << dy[m];
    return 0;
}
