#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y, m, d;
    cin >> y >> m >> d;
    if ((y-m+d)%10 == 0) cout << "대박";
    else cout << "그럭저럭";
    return 0;
}
