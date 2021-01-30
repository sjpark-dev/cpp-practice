#include <iostream>
using namespace std;

int f(int n, int r) {
    if (n==r || r==0) return 1;
    return f(n-1, r-1) + f(n-1, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r;
    cin >> n >> r;
    cout << f(n, r);
    return 0;
}
