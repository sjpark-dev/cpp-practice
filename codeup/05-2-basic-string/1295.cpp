#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (int i=0; s[i]!='\0'; i++) {
        if (65<=s[i] && s[i]<=90) s[i] += 32;
        else if (97<=s[i] && s[i]<=122) s[i] -= 32;
        cout << s[i];
    }
    return 0;
}
