#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, i, mn = 2147000000, mx = -2147000000;
    for (i=0; i<5; i++) {
        cin >> a;
        if (a<mn) mn = a;
        if (a>mx) mx = a;
    }
    cout << mx << "\n" << mn;
    return 0;
}
