#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, cnt = 0;
    string s;
    cin >> s;

    for (i = 0; i < s.length(); i++) {
        if (s[i] == '(') cnt++;
        else cnt--;
        
        if (cnt < 0) break;
    }

    if (cnt == 0) cout << "YES";
    else cout << "NO";

    return 0;
}
