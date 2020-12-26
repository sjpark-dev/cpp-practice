#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    string s;
    getline(cin, s);
    
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') continue;
        if (65 <= s[i] && s[i] <= 90) {
            s[i] += 32;
        }

        cout << s[i];
    }

    return 0;
}
