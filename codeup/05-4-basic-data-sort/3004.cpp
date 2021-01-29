#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a, c;
vector<pair<int, int>> b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, tmp;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
        c.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for (i=0; i<n; i++) {
        b.push_back(make_pair(a[i], i));
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (c[i]==b[j].first) {
                cout << b[j].second << " ";
                break;
            }
        }
    }
    return 0;
}
