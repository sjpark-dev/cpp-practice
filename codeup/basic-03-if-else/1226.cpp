#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[7], b[6], i, j, cnt = 0, bonus = 0;
    for (i=0; i<7; i++) {
        cin >> a[i];
    }
    for (i=0; i<6; i++) {
        cin >> b[i];
    }
    for (i=0; i<6; i++) {
        for (j=0; j<7; j++) {
            if (b[i]==a[j]) {
                if (j!=6) cnt++;
                else bonus = 1;
                break;
            }
        }
    }
    if (cnt==6) cout << 1;
    else if (cnt==5 && bonus==1) cout << 2;
    else if (cnt==5) cout << 3;
    else if (cnt==4) cout << 4;
    else if (cnt==3) cout << 5;
    else cout << 0;
    return 0;
}
