#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Data {
    int money;
    int when;
    Data (int a, int b) {
        money = a;
        when = b;
    }
    bool operator<(Data &b) {
        return when>b.when;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, a, b, mx = 0, res = 0;
    cin >> n;
    vector<Data> t;
    priority_queue<int> pq;
    for (i=0; i<n; i++) {
        cin >> a >> b;
        t.push_back(Data(a, b));
        if (b>mx) mx = b;
    }
    sort(t.begin(), t.end());
    j = 0;
    for (i=mx; i>=1; i--) {
        for ( ; j<n; j++) {
            if (t[j].when<i) break;
            pq.push(t[j].money);
        }
        if (!pq.empty()) {
            res += pq.top();
            pq.pop();
        }
    }
    cout << res;
    return 0;
}
