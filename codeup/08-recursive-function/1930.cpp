#include <cstdio>
using namespace std;

int memo[15][15];

int supersum(int k, int n) {
    if (memo[k][n]) return memo[k][n];
    if (k==0) return n;
    for (int i=1; i<=n; i++) {
        memo[k][n] += supersum(k-1, i);
    }
    return memo[k][n];
}

int main() {
    int k, n;
    while(scanf("%d %d", &k, &n)!=EOF) {
        printf("%d\n", supersum(k, n));    
    }
    return 0;
}
