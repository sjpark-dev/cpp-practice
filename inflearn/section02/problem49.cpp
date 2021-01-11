#include <iostream>
#include <vector>
using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, cnt = 0;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> b(n);
    for (i=0; i<n; i++) {
        cin >> b[i];
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            a[j][i] = b[i];
        }
    }
    for (i=n-1; i>=0; i--) {
        cin >> b[i];
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j]>b[i]) a[i][j] = b[i];
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cnt += a[i][j];
        }
    }
    cout << cnt;
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, i, j, tmp, cnt = 0;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (i=0; i<n; i++) {
//         cin >> a[i];
//     }
//     for (i=0; i<n; i++) {
//         cin >> b[i];
//     }
//     for (i=0; i<n; i++) {
//         for (j=0; j<n; j++) {
//             if (a[i]<b[j]) cnt += a[i];
//             else cnt += b[j];
//         }
//     }
//     cout << cnt;
//     return 0;
// }
