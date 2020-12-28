#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	cout << fixed << setprecision(1) << (float) a * b / 2;

	return 0;
}
