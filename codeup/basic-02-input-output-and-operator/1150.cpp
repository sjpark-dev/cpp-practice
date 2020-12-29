#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a < b ? a : b;
	d = d < c ? d : c;
	cout << d;
	return 0;
}
