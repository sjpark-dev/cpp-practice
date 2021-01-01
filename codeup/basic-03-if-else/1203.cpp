#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b;
    cin >> b;
    if (b<=10) cout << "정상";
    else if (b<=20) cout << "과체중";
    else cout << "비만";
    return 0;
}
