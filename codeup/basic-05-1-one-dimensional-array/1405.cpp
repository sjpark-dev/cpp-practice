#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    vector<int> a(n);
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            cout << a[j] << " ";
        }
        for (j=0; j<i; j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
