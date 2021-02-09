#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> dy(n+1);
    dy[1] = 2;
    dy[2] = 3;
    for (int i=3; i<=n; i++) {
        dy[i] = dy[i-2] + dy[i-1];
    }
    cout << dy[n];
    return 0;
}
