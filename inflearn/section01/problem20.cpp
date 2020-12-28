#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, a[101], b[101], i;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> a[i];
    }

    for (i=0; i<n; i++) {
        cin >> b[i];
    }

    for (i=0; i<n; i++) {
        if (a[i]==b[i]) cout << "D\n";
        else if (a[i]==1 && b[i] ==3) cout << "A\n";
        else if (a[i]==2 && b[i] ==1) cout << "A\n";
        else if (a[i]==3 && b[i] ==2) cout << "A\n";
        else cout << "B\n";
    }

	return 0;
}
