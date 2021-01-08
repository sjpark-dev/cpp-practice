#include <iostream>
#include <queue>
using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, pos = 0, cnt = 0, out = 0, i;
    cin >> n >> k;
    vector<int> v(n+1);
    while (true) {
        pos++;
        if (pos>n) pos = 1;
        if (v[pos]==0) {
            cnt++;
            if (cnt==k) {
                v[pos] = 1;
                cnt = 0;
                out++;
            }
        }
        if (out==n-1) break;
    }
    for (i=1; i<=n; i++) {
        if (v[i]==0) {
            cout << i;
            break;
        }
    }
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k, i, cnt = 0;
//     cin >> n >> k;
//     queue<int> q;
//     for (i=1; i<=n; i++) {
//         q.push(i);
//     }
//     while (!q.empty()) {
//         cnt++;
//         if (cnt!=k) {
//             q.push(q.front());
//             q.pop();
//         } else {
//             q.pop();
//             cnt = 0;
//         }
//         if (q.size()==1) break;
//     }
//     cout << q.front();
//     return 0;
// }
