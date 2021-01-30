#include <iostream>
using namespace std;

int triangle(int x) {
    int a, b, c, cnt = 0;
    for (int a=1; a<=x; a++) {
        for (int b=1; b<=x; b++) {
            for (int c=1; c<=x; c++) {
                int sum = a + b + c;
                if (sum==x && a<=b && b<=c) {
                    int mx = max(a, b);
                    mx = max(mx, c);
                    if (sum-mx>mx) cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << triangle(n);
    return 0;
}
