#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[11], b[11], i, asum = 0, bsum = 0;
    char w = 'D';
    
    for (i=0; i<10; i++) {
        cin >> a[i];
    }

    for (i=0; i<10; i++) {
        cin >> b[i];
    }

    for (i=0; i<10; i++) {
        if (a[i]>b[i]) {
            asum += 3;
            w = 'A';
        } else if (a[i]<b[i]) {
            bsum += 3;
            w = 'B';
        } else {
            asum++;
            bsum++;
        }
    }

    cout << asum << " " << bsum << "\n";

    if (asum>bsum) cout << 'A';
    else if (asum<bsum) cout << 'B';
    else cout << w;

	return 0;
}
