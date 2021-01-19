#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[11], k;
    for (int i=0; i<10; i++) {
        cin >> a[i];
    }
    cin >> k;
    cout << a[k-1];
    return 0;
}
