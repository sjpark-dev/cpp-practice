#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i;
    double tmp;
    cin >> n;
    for (i=1; i<n; i++) {
        tmp = sqrt(n-i);
        if (tmp == (int)tmp) {
            cout << i << " " << tmp;
            break;
        }
    }
    return 0;
}
