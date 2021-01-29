#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[31] = {}, n, i, flag = 0;
    cin >> n;
    for (i=0; i<31; i++) {
        a[i] = n % 2;
        n /= 2;
    }
    for (i=30; i>=0; i--) {
        if (a[i]==1) flag = 1;
        if (flag==1) cout << a[i];
    }
    if (flag==0) cout << 0;
    return 0;
}
