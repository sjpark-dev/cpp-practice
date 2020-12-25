#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0x80000000, b = 0x7fffffff;
    cout << a << " " << b;
    return 0;
}
