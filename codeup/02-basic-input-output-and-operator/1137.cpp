#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	if (a==b) cout << 0;
	else cout << 1;
	return 0;
}
