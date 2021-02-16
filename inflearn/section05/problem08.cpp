#include <iostream>
using namespace std;

int arr[20][20], dy[20][20];

int dfs(int a, int b) {
    if (dy[a][b]) return dy[a][b];
    if (a==0 && b==0) return dy[a][b] = arr[a][b];
    if (a==0) return dy[a][b] = dfs(a, b-1) + arr[a][b];
    if (b==0) return dy[a][b] = dfs(a-1, b) + arr[a][b];
    return dy[a][b] = min(dfs(a-1, b), dfs(a, b-1)) + arr[a][b];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << dfs(n-1, n-1);
    return 0;
}
