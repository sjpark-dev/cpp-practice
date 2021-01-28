#include <iostream>
#include <vector>
using namespace std;

int m, ch[13], mn = 2147000000;
vector<pair<int, int>> h;
vector<pair<int, int>> p;

void dfs(int lv, int s) {
    if (lv==m) {
        int sum = 0;
        for (int i=0; i<h.size(); i++) {
            int dis = 2147000000;
            int x1 = h[i].first;
            int y1 = h[i].second;
            for (int j=0; j<m; j++) {
                int x2 = p[ch[j]].first;
                int y2 = p[ch[j]].second;
                dis = min(dis, abs(x1-x2)+abs(y1-y2));
            }
            sum += dis;
        }
        if (sum<mn) mn = sum;
    } else {
        for (int i=s; i<p.size(); i++) {
            ch[lv] = i;
            dfs(lv+1, i+1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> a;
            if (a==1) h.push_back(make_pair(i, j));
            else if (a==2) p.push_back(make_pair(i, j));
        }
    }
    dfs(0, 0);
    cout << mn;
    return 0;
}
