#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c ,d;
    cin >> a >> b;
    c = (a-100) * 0.9;
    d = (b-c) * 100 / c;
    if (d<=10) cout << "정상";
    else if (d<=20) cout << "과체중";
    else cout << "비만";
    return 0;
}
