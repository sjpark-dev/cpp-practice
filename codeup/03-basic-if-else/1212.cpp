#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, sum, max;
    cin >> a >> b >> c;
    sum = a + b + c;
    max = a > b ? a : b;
    max = max > c ? max : c;
    if (sum-max > max) cout << "yes";
    else cout << "no";
    return 0;
}
