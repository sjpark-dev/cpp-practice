#include <iostream>
using namespace std;

int memo[51][51];

int f(int a, int b) {
    if (memo[a][b]) return memo[a][b];
    if (a==1 || b==1) return 1;
    return memo[a][b] = (f(a-1, b)+f(a, b-1)) % 100000000;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    cin >> r >> c;
    cout << f(r, c);
    return 0;
}
