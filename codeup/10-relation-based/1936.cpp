#include <iostream>
using namespace std;

int f(int a, int b) {
    if (a==b) return 0;
    if (a>b) return 1 + f(a/2, b);
    else return 1 + f(a, b/2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}
