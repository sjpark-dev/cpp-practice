#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d = 1;
    cin >> a >> b >> c;

    while (d % a != 0 || d % b != 0 || d % c != 0) d++;

    cout << d;
    
    return 0;
}
