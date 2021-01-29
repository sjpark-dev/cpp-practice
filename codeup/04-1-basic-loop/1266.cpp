#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, a, sum = 0;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}
