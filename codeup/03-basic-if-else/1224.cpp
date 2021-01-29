#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c ,d;
    cin >> a >> b >> c >> d;
    if (a/b > c/d) cout << ">";
    else if (a/b == c/d) cout << "=";
    else cout << "<";
    return 0;
}
