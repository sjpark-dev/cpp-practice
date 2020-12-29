#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, tmp, cnt = 0;
    cin >> n;
    for (i=1; i<=n; i++) {
        tmp = i;
        while (tmp>0) {
            if (tmp%10 == 3) cnt++;
            tmp /= 10;
        }
    }
    cout << cnt;
    return 0;
}
