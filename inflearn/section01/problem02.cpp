#include <iostream>

using namespace std;

int main() {
    int a, b, i, sum = 0;
    cin >> a >> b;

    for (i = a; i < b; i++) {
        sum += i;
        cout << i << " + ";
    }

    cout << i << " = " << sum + i;

    return 0;
}
