#include <iostream>
#include <algorithm>

using namespace std;

int a[60], b[60];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i;
	string s;
	cin >> s;

	for (i=0; s[i]!='\0'; i++) {
		if (65<=s[i] && s[i]<=90) a[s[i]-64]++;
		else a[s[i]-70]++;
	}

	cin >> s;

	for (i=0; s[i]!='\0'; i++) {
		if (65<=s[i] && s[i]<=90) b[s[i]-64]++;
		else b[s[i]-70]++;
	}

	for (i=1; i<=52; i++) {
		if (a[i]!=b[i]) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";

	return 0;
}
