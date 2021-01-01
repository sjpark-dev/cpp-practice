#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0;
    cin >> n;
    for (int i=2; i<=n; i+=2) {
        sum += i;
    }
    cout << sum;
    return 0;
}
