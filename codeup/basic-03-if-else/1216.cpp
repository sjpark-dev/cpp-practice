#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b>> c;
    if (b-c > a) cout << "advertise";
    else if (b-c == a) cout << "does not matter";
    else cout << "do not advertise";
    return 0;
}
