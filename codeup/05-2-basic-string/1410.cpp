#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 0, b = 0;
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++) {
        if (s[i]=='(') a++;
        else b++;
    }
    cout << a << " " << b;
    return 0;
}
