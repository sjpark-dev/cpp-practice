#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for (int i=1; i<10; i++) {
        cout << a << "*" << i << "=" << a * i <<"\n";
    }
    return 0;
}
