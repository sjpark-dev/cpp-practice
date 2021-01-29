#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i, j;
    cin >> n >> k;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if (i==1 || i==n || j==1 || j==n || (i+j-1)%k==0) {
                cout << "*";
            } else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
