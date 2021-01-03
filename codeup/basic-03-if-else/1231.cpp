#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    char c;
    cin >> a >> c >> b;
    switch(c) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        default:
            cout << fixed << setprecision(2) << (double) a / b;
    }
    return 0;
}
