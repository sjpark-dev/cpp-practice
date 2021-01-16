#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, cnt1 = 0, cnt2 = 0;
    string s;
    cin >> s;
    for (i=0; i<s.size(); i++) {
        if (s[i]=='C' || s[i]=='c') {
            cnt1++;
            if (i<s.size()-1 && (s[i+1]=='C'||s[i+1]=='c')) cnt2++;
        }
    }
    cout << cnt1 << "\n";
    cout << cnt2;
    return 0;
}
