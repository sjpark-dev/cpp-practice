#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i=a; i<=b; i++) {
        if (i%2==1) cout << i << " ";
    }
    return 0;
}
