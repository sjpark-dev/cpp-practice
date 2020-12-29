#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, cnt;
    cin >> n;
    vector<int> a(n);

    for (i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "1 ";

    for (i=1; i<n; i++) {
        cnt = 1;

        for (j=i-1; j>=0; j--) {
            if (a[i] <= a[j]) cnt++;
        }

        cout << cnt << " ";
    }

    return 0;
}
