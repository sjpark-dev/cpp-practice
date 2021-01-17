#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, m = 1;
    cin >> n;
    for (i=n; i>0; i--) {
        m *= i;
    }
    cout << m;
    return 0;
}
