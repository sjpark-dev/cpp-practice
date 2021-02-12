#include <iostream>
#include <vector>
using namespace std;

int dfs(int n, int k) {
    if (n==k || k==0) return 1;
    return dfs(n-1, k-1) + dfs(n-1, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << dfs(n, k);
    return 0;
}
