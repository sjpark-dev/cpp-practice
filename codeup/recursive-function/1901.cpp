#include <iostream>
using namespace std;

void f(int x) {
    if (x==0) return;
    f(x-1);
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
