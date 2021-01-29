#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, cnt = 0;
    cin >> n;
    a = n / 10;
    b = n % 10;
    cnt = a + 1;
    if (b==0) cnt--;
    cout << cnt;
    return 0;
}
