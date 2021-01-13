#include <iostream>
using namespace std;

void dfs(int x) {
    if (x>7) return;
    else {
        // cout << x << " ";  // preorder
        dfs(x*2);
        // cout << x << " ";  // inorder
        dfs(x*2+1);
        cout << x << " ";  // postorder
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dfs(1);
    return 0;
}
