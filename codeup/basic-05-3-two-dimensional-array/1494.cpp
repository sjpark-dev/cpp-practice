#include <iostream>
using namespace std;

int d[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i, s, e, u;
    cin >> n >> k;
    for (i=0; i<k; i++) {
        cin >> s >> e >> u;
        d[s] = d[s] + u; 
        d[e+1] = d[e+1] - u;
    }
    for (i=1; i<=n; i++) {
        cout << d[i] << " ";
    }
    cout << "\n";
    for (i=1; i<=n; i++) {
        d[i] = d[i-1] + d[i];
        cout << d[i] << " ";
    }
    return 0;
}
