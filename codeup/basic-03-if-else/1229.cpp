#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double h, w, s, b;
    cin >> h >> w;
    if (h < 150) s = h - 100;
    else if (h < 160) s = (h-150) / 2 + 50;
    else s = (h-100) * 0.9;
    b = (w-s) * 100 / s;
    if (b<=10) cout << "정상";
    else if (b<=20) cout << "과체중";
    else cout << "비만";
    return 0;
}
