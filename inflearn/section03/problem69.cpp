#include <iostream>
#include <vector>
using namespace std;

int q[100], front = -1, rear = -1, ch[10];
vector<int> g[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, a, b, x;
    for (i=0; i<6; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    q[++rear] = 1;
    ch[1] = 1;
    while(front<rear) {
        x = q[++front];
        cout << x << " ";
        for (i=0; i<g[x].size(); i++) {
            if (ch[g[x][i]]==0) {
                ch[g[x][i]] = 1;
                q[++rear] = g[x][i];
            }
        }
    }
    return 0;
}
