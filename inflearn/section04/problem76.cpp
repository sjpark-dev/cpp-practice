#include <iostream>
using namespace std;

//solution 3
int m[21][21];

int dfs (int n, int r) {
    if (m[n][r]>0) return m[n][r];
    if (n==r || r==0) return 1;
    else return m[n][r] = dfs(n-1, r-1) + dfs(n-1, r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r;
    cin >> n >> r;
    cout << dfs(n, r);
    return 0;
}

// solution 2
// int dfs (int n, int r) {
//     if (n==r || r==0) return 1;
//     else return dfs(n-1, r-1) + dfs(n-1, r);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, r;
//     cin >> n >> r;
//     cout << dfs(n, r);
//     return 0;
// }

// solution 1
// int m[21];

// int fact(int x) {
//     if (x==1) {
//         if (m[x]==0) m[x] = 1;
//         return m[x];
//     }
//     else {
//         if (m[x]==0) m[x] = x * fact(x-1);
//         return m[x];
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, r;
//     cin >> n >> r;
//     cout << fact(n) / (fact(r)*fact(n-r));
//     return 0;
// }
