#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==0 || i==n-1 || i==n/2) {
                cout << "*";
            } else {
                if (j==0 || j==n-1 || j==i || j==n-1-i || j==n/2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
