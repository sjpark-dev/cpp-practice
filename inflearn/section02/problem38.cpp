#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, pos;
    cin >> n;
    vector<int> is(n+1);
    vector<int> os(n+1);
    for (i=1; i<=n; i++) {
        cin >> is[i];
    }
    for (i=n; i>=1; i--) {
        pos = i;
        for (j=0; j<is[i]; j++) {
            os[pos] = os[pos+1];
            pos++;
        }
        os[pos] = i;
    }
    for (i=1; i<=n; i++) {
        cout << os[i] << " ";
    }
    return 0;
}
