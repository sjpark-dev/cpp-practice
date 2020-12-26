#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0, flag;
	cin >> n;
	
	for (int i=2; i<=n; i++) {
		flag = 1;
		
		for (int j=2; j*j<=i; j++) {
			if (i%j == 0) {
				flag = 0;
				break;
			}
		}
		
		if (flag == 1) cnt++;
	}
	
	cout << cnt;

	return 0;
}

