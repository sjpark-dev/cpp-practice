#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    while (n>0) {
        n /= 10;
        cnt++;
    }
    cout << cnt;
    return 0;
}
