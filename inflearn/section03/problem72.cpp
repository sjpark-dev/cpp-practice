#include <iostream>
#include <queue>
using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i;
    queue<int> q;
    cin >> n >> k;
    for (i=1; i<=n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (i=1; i<k; i++) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        if (q.size()==1) {
            cout << q.front();
            q.pop();
        }
    }
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k, i, cnt = 0;
//     queue<int> q;
//     cin >> n >> k;
//     for (i=1; i<=n; i++) {
//         q.push(i);
//     }
//     while (q.size()>1) {
//         cnt++;
//         if (cnt==k) {
//             q.pop();
//             cnt = 0;
//         }
//         else {
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     cout << q.front();
//     return 0;
// }
