#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << sum << "\n";
    cout << fixed << setprecision(1) << (float) sum / 3;

    return 0;
}
