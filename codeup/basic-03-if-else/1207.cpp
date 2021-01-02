#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, cnt = 0;
    for (int i=0; i<4; i++) {
        cin >> a;
        if (a) cnt++;
    }
    if (cnt==1) cout << "도";
    else if (cnt==2) cout << "개";
    else if (cnt==3) cout << "걸";
    else if (cnt==4) cout << "윷";
    else cout << "모";
    return 0;
}
