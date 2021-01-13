#include <iostream>
using namespace std;

void recursive(int x) {
    if (x==0) return;
    else {
        recursive(x/2);
        cout << x % 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    recursive(n);
    return 0;
}
