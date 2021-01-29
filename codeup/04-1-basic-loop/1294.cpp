#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    string s;
    getline(cin, s);
    for (i=0; i<s.size(); i++) {
        if (s[i]>=97 && s[i]<=122) {
            s[i] += 3;
            if (s[i]>122) s[i] -= 26;
        }
        cout << s[i];
    }
    return 0;
}
