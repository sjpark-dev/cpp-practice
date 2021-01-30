#include <iostream>
using namespace std;

int memo[100001];

int f(int x) {
    if (x<0) return 0;
    if (x==0) return 1;
    if (memo[x]) return memo[x];
    return memo[x] = (f(x-1)+f(x-2)+f(x-3)) % 1000;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
