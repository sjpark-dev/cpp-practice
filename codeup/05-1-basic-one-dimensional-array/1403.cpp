#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, a[101], i;
    cin >> k;
    
    for (i=0; i<k; i++) {
        cin >> a[i];
    }

    for (i=0; i<k; i++) {
        cout << a[i] << "\n";
    }

    for (i=0; i<k; i++) {
        cout << a[i] << "\n";
    }

    return 0;
}
