#include <iostream>
using namespace std;

int dy[46];

int dfs(int n) {
    if (dy[n]) return dy[n];
    if (n==1 || n==2) return n;
    return dy[n] = dfs(n-2) + dfs(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}
