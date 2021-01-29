#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float f;
    cin >> f;
    cout << fixed << setprecision(2) << f;

    return 0;
}
