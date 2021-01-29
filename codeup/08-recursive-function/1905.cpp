#include <iostream>
using namespace std;

int f(int x) {
    if (x==1) return 1;
    else {
        return x + f(x-1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
