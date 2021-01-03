#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[27] = {}, i;
    string s;
    getline(cin, s);
    for (i=0; i<s.length(); i++) {
        if (97<=s[i] && s[i]<=122) a[s[i]-97]++;
    }
    for (i=0; i<26; i++) {
        cout << (char) (i+97) << ":" << a[i] << "\n";
    }
    return 0;
}
