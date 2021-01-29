#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    if (a%7 == 0) cout << "multiple";
    else cout << "not multiple";
    return 0;
}
