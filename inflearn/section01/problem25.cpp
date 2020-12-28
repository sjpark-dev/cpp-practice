#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, i, j;
	cin >> n;
	vector<int> s(n), r(n, 1);

	for (i=0; i<n; i++) {
		cin >> s[i];
	}

	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			if (s[i] < s[j]) r[i]++;
		}
	}

	for (i=0; i<n; i++) {
		cout << r[i] << " ";
	}

	return 0;
}
