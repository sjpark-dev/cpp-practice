#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (50<=n && n<=70 || n%6 == 0) cout << "win";
    else cout << "lose";
    return 0;
}
