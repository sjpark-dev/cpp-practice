#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, i, sum = 0, max;
    cin >> n >> k;
    vector<int> a(n);

    for (i=0; i<n; i++) {
        cin >> a[i];
        
        if (i<k) sum += a[i];
    }

    max = sum;

    for (i=k; i<n; i++) {
        sum = sum - a[i-k] + a[i];
        
        if (sum > max) max = sum;
    }

    cout << max;

	return 0;
}
