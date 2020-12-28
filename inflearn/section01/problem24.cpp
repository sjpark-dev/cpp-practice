#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, i, pre, now, d;
    cin >> n;
    vector<int> ch(n);
    cin >> pre;

    for (i=1; i<n; i++) {
        cin >> now;
        d = abs(now - pre);

        if (0<d && d<n && ch[d]==0) {
            ch[d] = 1;
        } else {
            cout << "NO";
            return 0;
        }

        pre = now;
    }

    cout << "YES";

	return 0;
}
