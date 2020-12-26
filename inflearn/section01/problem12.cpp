#include <iostream>
#include <cmath>

using namespace std;

// solution 2
int main() {
    int n, c = 1, d = 9, sum = 0, a = 0;
    cin >> n;

    while (sum + d < n) {
        sum += d;
        a += d * c;
        c++;
        d *= 10;
    }

    a += (n - sum) * c;
    cout << a;

    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, c = 1, sum = 0;
//     cin >> n;

//     while (n >= pow(10, c)) {
//         sum += (pow(10, c) - pow(10, c-1)) * c;
//         c++;
//     }
    
//     sum += (n - pow(10, c - 1) + 1) * c;
//     cout << sum;

//     return 0;
// }
