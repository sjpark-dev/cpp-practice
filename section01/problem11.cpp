#include <iostream>
#include <string>

using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, cnt = 0, tmp;
    cin >> n;

    for (i = 1; i <= n; i++) {
        tmp = i;

        while (tmp > 0) {
            tmp /= 10;
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

//     int n, i, cnt = 0;
//     cin >> n;

//     for (i = 1; i <= n; i++) {
//         cnt += to_string(i).length();
//     }

//     cout << cnt;
// }
