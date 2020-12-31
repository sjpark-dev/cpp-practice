#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, idx, tmp;
    cin >> n;
    vector<int> a(n);
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n-1; i++) {
        idx = i;
        for (j=i+1; j<n; j++) {
            if (a[j]<a[idx]) idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }
    for (i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
