#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b;
    bool c;
    cin >> a >> b;
    c = a <= b;
    cout << c;

    return 0;
}
