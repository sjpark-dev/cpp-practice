#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a, b, i;
    cin >> a >> b;
    for (i=a; i<=b; i++) {
        cout << i << " ";
    }
    return 0;
}
