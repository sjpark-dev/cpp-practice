#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, cnt1 = 0, cnt2 = 0, tmp;
    cin >> n;

    for (i=2; i<=n; i++) {
        tmp = i;
        j = 2;
        while (true) {
            if (tmp%j == 0) {
                tmp /= j;

                if (j == 2) cnt1++;
                else if (j == 5) cnt2++;
            } else j++;

            if (tmp == 1) break;
        }
    }

    if (cnt1 < cnt2) cout << cnt1;
    else cout << cnt2;

    return 0;
}
