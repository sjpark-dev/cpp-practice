#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    for (int i=0; i<3; i++) {
        cin >> a;
        if (a<=170) {
            cout << "CRASH " << a;
            return 0;
        }
    }
    cout << "PASS";
    return 0;
}
