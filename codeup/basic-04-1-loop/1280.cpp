#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, i, sum = 0;
    cin >> a >> b;
    for (i=a; i<=b; i++) {
        if (i%2==1) {
            cout << "+" << i;
            sum += i;
        } else {
            cout << "-" << i;
            sum -= i;
        } 
    }
    cout << "=" << sum;
    return 0;
}
