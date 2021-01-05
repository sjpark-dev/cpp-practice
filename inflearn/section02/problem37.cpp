#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c[20] = {}, s, n, a, i, j, pos;
    cin >> s >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        pos = -1;
        for (j=0; j<s; j++) {
            if (c[j]==a) pos = j;
        }
        if (pos==-1) {
            for (j=s-1; j>0; j--) {
                c[j] = c[j-1];
            }
        } else {
            for (j=pos; j>0; j--) {
                c[j] = c[j-1];
            }
        }
        c[0] = a;
    }
    for (i=0; i<s; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
