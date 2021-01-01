#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r;
    cin >> n;
    r = n % 10;
    if (1<=r && r<=3 && n/10!=1) {
        if (r==1) cout << n << "st";
        else if (r==2) cout << n << "nd";
        else cout << n << "rd";
    } else cout << n << "th";
    return 0;
}
