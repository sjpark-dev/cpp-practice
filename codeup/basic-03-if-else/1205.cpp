#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, mx;
    cin >> a >> b;
    mx = a + b;
    if (mx < a-b) mx = a - b;
    if (mx < b-a) mx = b - a;
    if (mx < a*b) mx = a * b;
    if (mx < a/b) mx = a / b;
    if (mx < b/a) mx = b / a;
    if (mx < pow(a, b)) mx = pow(a, b);
    if (mx < pow(b, a)) mx = pow(b, a);
    cout << fixed << setprecision(6) << mx;
    return 0;
}
