#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    for (int i=0; i<10; i++) {
        cin >> a;
        if (a%5 == 0) {
            cout << a;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
