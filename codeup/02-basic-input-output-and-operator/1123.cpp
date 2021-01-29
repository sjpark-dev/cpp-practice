#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;
	cout << fixed << setprecision(3) << (float) 9 / 5 * a + 32;

	return 0;
}
