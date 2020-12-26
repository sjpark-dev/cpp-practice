#include <iostream>
#include <string>

using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[52];
    int i, n = 0, cnt = 0;
    cin >> s;

    for (i = 0; s[i] != '\0'; i++) {
        if (48 <= s[i] && s[i] <= 57) {
            n = 10 * n + (s[i] - 48);
        }
    }

    cout << n << "\n";

    for (i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }

    cout << cnt;

    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s, sn = "";
//     int n, i, cnt = 0;

//     cin >> s;

//     for (i = 0; i < s.length(); i++) {
//         if ('0' <= s[i] && s[i] <= '9') {
//             sn += s[i];
//         }
//     }

//     n = stoi(sn);
//     cout << n << "\n";

//     for (i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             cnt += 1;
//         }
//     }

//     cout << cnt;

//     return 0;
// }
