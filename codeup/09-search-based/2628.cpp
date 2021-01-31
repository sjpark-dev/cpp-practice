#include <iostream>
using namespace std;

bool cross(int a, int b, int c, int d) {
    int cnt = 0, mn, mx;
    mn = min(a, b);
    mx = max(a, b);
    for (int i=mn+1; i<mx; i++) {
        if (i==c || i==d) cnt++;
    }
    if (cnt==1) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (cross(a, b, c, d)) cout << "cross";
    else cout << "not cross";
    return 0;
}
