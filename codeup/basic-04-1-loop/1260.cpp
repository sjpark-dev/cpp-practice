#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (i%3 == 0) sum += i;
    }
    cout << sum;
    return 0;
}
