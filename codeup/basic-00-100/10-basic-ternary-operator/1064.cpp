#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, c, d;
    cin >> a >> b >> c;
    d = (a < b ? a : b) < c ? (a < b ? a : b) : c;
    cout << d;
    
    return 0;
}
