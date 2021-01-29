#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, m;
    cin >> y >> m;
    if (m==2) {
        if (y%400==0 || (y%4==0&&y%100!=0)) cout << 29;
        else cout << 28;
    } else if (m==4 || m==6 || m==9 || m==11) cout << 30;
    else cout << 31;
    return 0;
}
