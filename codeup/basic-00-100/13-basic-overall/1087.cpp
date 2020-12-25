#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, sum = 0;
    cin >> n;

    for (i = 1; ; i++) {
        sum += i;
        if (sum >= n) break;
    }
    
    cout << sum;

    return 0;
}
