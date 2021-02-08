#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, mn, i;
    cin >> a >> b >> c;
    mn = min(a, b);
    mn = min(mn, c);
    for (i=mn; i>0; i--) {
        if (a%i==0 && b%i==0 && c%i==0) break;
    }
    cout << i;
    return 0;
}
