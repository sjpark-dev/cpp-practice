#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[30];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        cout << "\'" << s[i] << "\'\n";
    }

    return 0;
}
