#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, b, c, s;
    cin >> h >> b >> c >> s;
    cout << fixed << setprecision(1) << (float) h * b * c * s / 8 / (1024 * 1024) << " MB";

    return 0;
}
