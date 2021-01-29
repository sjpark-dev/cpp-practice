#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, sum = 0;
    string n;
    cin >> n;
    for (i=0; i<n.size(); i++) {
        sum += n[i] - 48;
    }
    if (sum%3==0) cout << 1;
    else cout << 0;
    return 0;
}
