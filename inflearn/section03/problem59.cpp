#include <iostream>
using namespace std;

int ch[11], n;

void dfs(int x) {
    if (x == n+1) {
        for (int i=1; i<=n; i++) {
            if (ch[i]==1) cout << i << " ";
        }
        cout << "\n";
    } else {
        ch[x] = 1;
        dfs(x+1);
        ch[x] = 0;
        dfs(x+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    dfs(1);
    return 0;
}
