#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    a = 2012 - a + 1;
    cout << a % 100 << " ";
    if (a/100 == 19) cout << 1;
    else cout << 3;
    return 0;
}
