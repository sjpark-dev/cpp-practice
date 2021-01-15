#include <iostream>
#include <queue>
using namespace std;

int ch[10001], d[3] = {1, -1, 5};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, e, x, i, pos;
    queue<int> q;
    cin >> s >> e;
    ch[s] = 1;
    q.push(s);
    while (!q.empty()) {
        x = q.front();
        q.pop();
        for (i=0; i<3; i++) {
            pos = x + d[i];
            if (pos<1 || pos>10000) continue;
            if (pos==e) {
                cout << ch[x];
                return 0;
            }
            if (ch[pos]==0) {
                ch[pos] = ch[x] + 1;
                q.push(pos);
            }
        }
    }
    return 0;
}
