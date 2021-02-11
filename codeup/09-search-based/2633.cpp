#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i;
    cin >> n >> k;
    vector<int> a(n);
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n; i++) {
        if (a[i]>=k) break;
    }
    cout << i+1;
    return 0;
}
