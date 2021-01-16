#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, cnt = 0;
    string s;
    getline(cin, s);
    for (i=0; i<s.size()-3; i++) {
        if (s[i]=='l' && s[i+1]=='o' && s[i+2]=='v' && s[i+3]=='e') cnt++;
    }
    cout << cnt;
    return 0;
}
