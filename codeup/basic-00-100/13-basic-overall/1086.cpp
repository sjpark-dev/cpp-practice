#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w, h, b;
    cin >> w >> h >> b;
    cout << fixed << setprecision(2) << (float) w * h * b / 8 / (1024 * 1024) << " MB";

    return 0;
}
