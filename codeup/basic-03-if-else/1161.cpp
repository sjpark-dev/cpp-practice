#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b;
    if (a%2 == 0) cout << "짝수";
    else cout << "홀수";
    cout << "+";
    if (b%2 == 0) cout << "짝수";
    else cout << "홀수";
    cout << "=";
    c = a + b;
    if (c%2 == 0) cout << "짝수";
    else cout << "홀수";
    return 0;
}
