#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, sum = 0;
    cin >> n;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            sum += j;
        }
    }
    cout << sum;
    return 0;
}
