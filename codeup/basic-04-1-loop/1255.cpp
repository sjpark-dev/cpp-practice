#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, i;
    cin >> a >> b;
    for (i=a; i<=b; i+=0.01) {
        cout << fixed << setprecision(2) << i << " ";
    }
    return 0;
}
