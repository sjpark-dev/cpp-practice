#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, a[1001];
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n; i++) {
        cout << i+1 << ": ";
        for (j=0; j<n; j++) {
            if (i!=j) {
                if (a[i]>a[j]) cout << "> ";
                else if (a[i]==a[j]) cout << "= ";
                else cout << "< ";
            }
        }
        cout << "\n";
    }
    return 0;
}
