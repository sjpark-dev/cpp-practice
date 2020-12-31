#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    if (a>0) cout << "양수";
    else if (a==0) cout << 0;
    else cout << "음수";
    return 0;
}
