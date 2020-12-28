#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, j, num, ans, sum;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> num;
        cin >> ans;
        sum = 0;

        for (j=1; j<=num; j++) {
            sum += j;
        }

        if (ans == sum) cout << "YES\n";
        else cout << "NO\n";
    }

	return 0;
}
