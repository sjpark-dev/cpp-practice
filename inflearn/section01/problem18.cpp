#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, a, i, cnt = 0, max = -1;
    cin >> n >> m;

    for (i=0; i<n; i++) {
        cin >> a;
        
        if (a>m) {
            cnt++;
            
            if (cnt > max) max = cnt;
        } else {
            cnt = 0;
        }
    }

    cout << max;

	return 0;
}
