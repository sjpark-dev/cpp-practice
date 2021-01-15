#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, n, i;
    cin >> a >> b >> c >> n;
    for (i=1; i<n; i++) {
        a = a * b + c;
    }
    cout << a;
    return 0;
}
