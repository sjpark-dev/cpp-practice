#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, now, pre, cnt, max, i;
    cin >> n;
    cin >> pre;
    cnt = 1;
    max = 1;

    for (i=1; i<n; i++) {
        cin >> now;

        if (now >= pre) {
            cnt++;

            if (cnt > max) max = cnt;
        } else {
            cnt = 1;
        }
        
        pre = now;
    }
    
    cout << max;

	return 0;
}
