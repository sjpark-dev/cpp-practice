#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    string s;
    cin >> s;
    for (i=0; i<s.size(); i++) {
        if (s[i]=='t') cout << i + 1 << " ";
    }
    return 0;
}
