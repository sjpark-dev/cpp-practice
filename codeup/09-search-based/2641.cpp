#include <iostream>
#include <vector>
using namespace std;

int n, cnt = 0;

void dfs(int step, int wait) {
    if (step>n) return;
    if (step==n) {
        cnt++;
        return;
    }
    if (wait>0) wait--;
    dfs(step+1, wait);
    dfs(step+2, wait);
    if (wait==0) dfs(step+3, wait+3);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    dfs(0, 0);
    cout << cnt;
    return 0;
}
