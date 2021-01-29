#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    string a, b;
    cin >> a >> b;
    if (a.size()<b.size()) cout << a << " " << b;
    else if (a.size()>b.size()) cout << b << " " << a;
    else {
        for (i=0; i<a.size(); i++) {
            if (a[i]<b[i]) {
                cout << a << " " << b;
                return 0;
            }
            else if (a[i]>b[i]) {
                cout << b << " " << a;
                return 0;
            }
        }
    }
    return 0;
}
