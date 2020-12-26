#include <iostream>

using namespace std;

int reverse(int x);
bool isPrime(int x);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> a;
		a = reverse(a);
		if (isPrime(a)) cout << a << " ";
	}

	return 0;
}

int reverse(int x) {
	int sum = 0;
	
	while (x>0) {
		sum = 10 * sum + x % 10;
		x /= 10;
	}
	
	return sum;
}

bool isPrime(int x) {
	if (x == 1) return false;
	
	for (int i=2; i<x; i++) {
		if (x%i == 0) return false;
	}
	
	return true;
}

