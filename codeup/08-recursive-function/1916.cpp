#include <iostream>
using namespace std;

int memo[201];

int f(int x) {
    if (memo[x]) return memo[x];
    if (x<=2) return 1;
    else return memo[x] = (f(x-1)+f(x-2)) % 10009;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << f(n) % 10009;
    return 0;
}
