#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    for (i=1; i<=9; i++) {
        for (j=2; j<=5; j++) {
            cout << j << " x " << i << " = " << setw(2) << i * j;
            if (j==5) cout << "\n";
            else cout << "\t";
        }
    }
    return 0;
}
