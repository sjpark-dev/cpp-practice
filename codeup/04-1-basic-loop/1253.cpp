#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, tmp, i;
    cin >> a >> b;
    if (a>b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    for (i=a; i<=b; i++) {
        cout << i << " ";
    }
    return 0;
}
