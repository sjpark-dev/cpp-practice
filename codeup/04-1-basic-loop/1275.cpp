#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, i, m = 1;
    cin >> n >> k;
    for (i=0; i<k; i++) {
        m *= n;
    }
    cout << m;
    return 0;
}
