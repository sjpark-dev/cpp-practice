#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int i;
    char tmp;
    cin >> s;
    for (i=0; s[i]!='\0'; i++) {
        tmp = s[i] + 2;
        cout << tmp;
    }
    cout << "\n";
    for (i=0; s[i]!='\0'; i++) {
        tmp = s[i] * 7 % 80 + 48;
        cout << tmp;
    }
    return 0;
}
