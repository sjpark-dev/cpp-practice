#include <iostream>
#include <vector>
using namespace std;

int n, mx = -2147000000;
vector<int> t, p;

void dfs(int day, int sum) {
    if (day==n+1) {
        if (sum>mx) mx = sum;
    } else {
        if(day+t[day]<=n+1) dfs(day+t[day], sum+p[day]);
        dfs(day+1, sum);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> n;
    t.push_back(0);
    p.push_back(0);
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        t.push_back(a);
        p.push_back(b);
    }
    dfs(1, 0);
    cout << mx;
    return 0;
}
