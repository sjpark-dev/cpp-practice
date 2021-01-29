#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum;
    char c;
    cin >> sum;
    while (true) {
        cin >> c;
        if (c=='=') break;
        else {
            cin >> n;
            if (c=='+') sum += n;
            else if (c=='-') sum -= n;
            else if (c=='*') sum *= n;
            else if (c=='/') sum /= n;
        }
    }
    cout << sum;
    return 0;
}
