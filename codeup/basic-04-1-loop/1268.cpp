#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, a, cnt = 0;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        if (a%2 == 0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
