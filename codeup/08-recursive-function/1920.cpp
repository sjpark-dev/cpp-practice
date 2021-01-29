#include <iostream>
using namespace std;

void f(int x) {
    if (x/2) f(x/2);
    cout << x % 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    f(n);
    return 0;
}
