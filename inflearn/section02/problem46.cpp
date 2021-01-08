#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, i, pos = 0, cnt = 0, sum = 0;
	cin >> n;
	vector<int> v(n+1);
	for (i=1; i<=n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	cin >> k;
	if (k>=sum) {
		cout << -1;
		return 0;
	}
	while (true) {
		pos++;
		if (pos>n) pos = 1;
		if (v[pos]==0) continue;
		v[pos]--;
		cnt++;
		if (cnt==k) break;
	}
	while (true) {
		pos++;
		if (pos>n) pos = 1;
		if (v[pos]!=0) break;
	}
	cout << pos;
	return 0;
}
