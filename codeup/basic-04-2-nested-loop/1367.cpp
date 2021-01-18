#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, k, i, j, tmp;
    char d;
    cin >> h >> k >> d;
    for (i=0; i<h; i++) {
        if (d=='L') tmp = i;
        else tmp = h - 1 - i;
        for (j=0; j<tmp; j++) {
            cout << " ";
        }
        for (j=0; j<k; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
