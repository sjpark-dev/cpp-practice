#include <iostream>
using namespace std;

int memo[21];

int f(int n) {
    if (n<=0) return 0;
    if (memo[n]) return memo[n];
    if (n==1) return memo[n] = 1;
    if (n==2) return memo[n] = 2;
    return memo[n] = f(n-1) + f(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
