#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float n;
    cin >> n;
    if (50<=n && n<=60) cout << "win";
    else cout << "lose";
    return 0;
}
