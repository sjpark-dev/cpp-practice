#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (30<=n && n<=40 || 60<=n && n<=70) cout << "win";
    else cout << "lose";
    return 0;
}
