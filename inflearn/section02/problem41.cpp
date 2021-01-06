#include <iostream>
using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b = 1, cnt = 0, tmp, i;
    cin >> a;
    tmp = a;
    a--;
    while (a>0) {
        b++;
        a = a - b;
        if (a%b == 0) {
            for (i=1; i<b; i++) {
                cout << (a/b) + i << " + ";
            }
            cout << (a/b) + i << " = " << tmp << "\n";
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, sum, i, p1, p2, cnt = 0;
//     cin >> n;
//     p1 = n - 1;
//     p2 = n - 2;
//     sum = p1 + p2;
//     while (p2>0) {
//         if (sum<n) {
//             sum += --p2;
//         } else if (sum>n) {
//             sum -= p1--;
//         } else {
//             cnt++;
//             cout << p2;
//             for (i=p2+1; i<=p1; i++) {
//                 cout << " + " << i;
//             }
//             cout << " = " << sum << "\n";
//             sum += --p2;
//         }
//     }
//     cout << cnt;
//     return 0;
// }
