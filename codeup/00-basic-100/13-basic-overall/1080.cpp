#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 0, n, sum = 0;
    cin >> n;

    do {
        i++;
        sum += i;
    } while (sum < n);

    cout << i;

    return 0;
}
