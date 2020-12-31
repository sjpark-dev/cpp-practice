#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (b<30) {
        if (a==0) a = 24 + a - 1;
        else a -= 1;
        b = 60 + b - 30;
    } else b -= 30;
    cout << a << " " << b;
    return 0;
}
