#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;
	cout << a / 60 << " " << a % 60;

	return 0;
}
