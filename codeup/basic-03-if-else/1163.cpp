#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, m, d, a;
    cin >> y >> m >> d;
    a = y + m + d;
    a = a / 100 % 10;
    if (a%2 == 0) cout << "대박";
    else cout << "그럭저럭";
    return 0;
}
