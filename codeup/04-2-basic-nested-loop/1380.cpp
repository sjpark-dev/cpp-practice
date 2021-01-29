#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, i, j;
    cin >> k;
    for (i=1; i<=6; i++) {
        for (j=1; j<=6; j++) {
            if (i+j == k) cout << i << " " << j << "\n";
        }
    }
    return 0;
}
