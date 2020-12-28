#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	float a, b;
	cin >> a >> b;
	cout << fixed << setprecision(2) << a * b;

	return 0;
}
