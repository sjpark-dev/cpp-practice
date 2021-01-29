#include <iostream>
using namespace std;

void f(int x) {
    if (x==1) {
        cout << 1 << "\n";
        return;
    }
    if (x%2==1) f(3*x+1);
    else f(x/2);
    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    f(n);
    return 0;
}
