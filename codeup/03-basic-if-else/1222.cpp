#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c;
    d = (90-a) / 5;
    if ((90-a)%5!=0) d++;
    if (b+d > c) cout << "win";
    else if (b+d == c) cout << "same";
    else cout << "lose";
    return 0;
}
