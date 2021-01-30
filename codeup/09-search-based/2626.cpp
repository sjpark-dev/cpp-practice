#include <iostream>
using namespace std;

int triangle(int x) {
    int a, b, c, cnt = 0;
    for (a=x/3; a<=x/2; a++) {
        for (b=1; b<=x/3; b++) {
            c = x - a - b;
            if (b<=c && c<=a && b+c>a) cnt++;
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
