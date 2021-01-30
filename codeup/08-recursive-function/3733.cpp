#include <iostream>
using namespace std;

int memo[10000001];

int f(long long int x) {
    if (x>10000000) {
        if (x%2==1) return 1 + f(3*x+1);
        else return 1 + f(x/2);
    } else {
        if (memo[x]) return memo[x];
        if (x==1) return 1;
        if (x%2==1) return memo[x] = 1 + f(3*x+1);
        else return memo[x] = 1 + f(x/2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, mx = -2147000000, idx= 0, tmp;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        tmp = f(i);
        if (tmp>mx) {
            mx = tmp;
            idx = i;
        }
    }
    cout << idx << " " << mx;
    return 0;
}
