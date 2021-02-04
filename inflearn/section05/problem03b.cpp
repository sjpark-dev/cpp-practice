#include <iostream>
using namespace std;

int dy[47];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    dy[1] = 1;
    dy[2] = 2;
    for (int i=3; i<=n+1; i++) {
        dy[i] = dy[i-2] + dy[i-1];
    }
    cout << dy[n+1];
    return 0;
}
