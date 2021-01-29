#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j;
    cin >> n >> m;
    for (i=1; i<=m; i++) {
        if (i==1 || i==m) cout << "+";
        else cout << "|";
        for (j=2; j<=n-1; j++) {
            if (i==1 || i==m) cout << "-";
            else cout << " ";
        }
        if (i==1 || i==m) cout << "+\n";
        else cout << "|\n";
    }
    return 0;
}
