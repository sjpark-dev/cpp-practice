#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    if (a%2 == 0) cout << "even";
    else cout << "odd";
    return 0;
}
