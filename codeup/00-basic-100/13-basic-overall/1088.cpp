#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) continue;
        cout << i << " ";
    }

    return 0;
}
