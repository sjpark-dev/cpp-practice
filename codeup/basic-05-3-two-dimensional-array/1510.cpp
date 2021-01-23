#include <iostream>
using namespace std;

int a[50][50];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i = 0, j, cnt = 0;
    cin >> n;
    j = n / 2;
    while (cnt<n*n) {
        a[i][j] = ++cnt;
        if (cnt%n!=0) {
            i--;
            if (i<0) i += n;
            j++;
            if (j>=n) j -= n;
        } else {
            i++;
            if (i>=n) i-= n;
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
