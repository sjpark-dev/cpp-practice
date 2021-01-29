#include <iostream>
using namespace std;

void f(int x) {
    cout << x << "\n";
    if (x==1) return;
    if (x%2==1) f(3*x+1);
    else f(x/2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    f(n);
    return 0;
}
