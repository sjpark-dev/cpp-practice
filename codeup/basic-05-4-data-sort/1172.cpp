#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[3], i, j, tmp;

    for (i=0; i<3; i++) {
        cin >> a[i];
    }

    for (i=0; i<2; i++) {
        for (j=0; j<2-i; j++) {
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    for (i=0; i<3; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
