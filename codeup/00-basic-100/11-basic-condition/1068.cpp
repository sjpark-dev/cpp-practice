#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;

    if (a >= 90) cout << "A";
    else if (a >= 70) cout << "B";
    else if (a >= 40) cout << "C";
    else cout << "D";


    return 0;
}
