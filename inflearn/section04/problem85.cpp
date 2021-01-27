#include <iostream>
#include <vector>
using namespace std;

int n, mx = -2147000000, mn = 2147000000;
vector<int> s, o;

void dfs(int level, int sum) {
    if (level==n) {
        if (sum>mx) mx = sum;
        if (sum<mn) mn = sum;
    } else {
        for (int i=0; i<4; i++) {
            if (o[i]>0) {
                o[i]--;
                if (i==0) dfs(level+1, sum+s[level]);
                else if (i==1) dfs(level+1, sum-s[level]);
                else if (i==2) dfs(level+1, sum*s[level]);
                else dfs(level+1, sum/s[level]);
                o[i]++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, i;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        s.push_back(a);
    }
    for (i=0; i<4; i++) {
        cin >> a;
        o.push_back(a);
    }
    dfs(1, s[0]);
    cout << mx << "\n" << mn;
    return 0;
}
