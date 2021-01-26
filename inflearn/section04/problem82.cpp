#include <iostream>
using namespace std;

int n, r, a[15], ch[15], cnt = 0, path[15];

void dfs(int level) {
    int i;
    if (level==r) {
        cnt++;
        for (i=0; i<r; i++) {
            cout << path[i] << " ";
        }
        cout << "\n";
    } else {
        for (i=0; i<n; i++) {
            if (ch[i]==0) {
                ch[i] = 1;
                path[level] = a[i];
                dfs(level+1);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> r;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    dfs(0);
    cout << cnt;
    return 0;
}
