#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]!=' ') cout << s[i];
    }
    return 0;
}
