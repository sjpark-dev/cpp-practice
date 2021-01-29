#include <iostream>
using namespace std;

int b;

void f(int x) {
    if (x>b) return;
    else {
        if (x%2==1) cout << x << " ";
        f(x+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a >> b;
    f(a);
    return 0;
}
