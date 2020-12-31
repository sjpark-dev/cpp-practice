#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    a /= 10000;
    if (b==1 || b==2) a += 1900;
    else a += 2000;
    cout << 2012 - a + 1;
    return 0;
}
