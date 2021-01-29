#include <iostream>
using namespace std;

int a[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, cnt = 1, sum = 0;
    cin >> n;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            a[i][j] = cnt++;
            if (i==0 || j==0 || i==n-1 || j==n-1) sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}
