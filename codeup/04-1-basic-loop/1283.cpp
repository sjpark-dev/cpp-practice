#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c, i, tmp;
    int r;
    cin >> a >> b;
    tmp = a;
    for (i=0; i<b; i++) {
        cin >> c;
        tmp = tmp * (1+c/100);
    }
    tmp -= a;
    if (tmp>0) tmp += 0.5;
    else if (tmp<0) tmp -= 0.5;
    r = (int) tmp;
    cout << r << "\n";
    if (r>0) cout << "good";
    else if (r==0) cout << "same";
    else cout << "bad";
    return 0;
}
