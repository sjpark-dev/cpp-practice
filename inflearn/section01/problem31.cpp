#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int c = 0, h = 0, i, pos;
    cin >> s;
    if (s[1] == 'H') {
        c = 1;
        pos = 1;
    } else {
        for (i=1; s[i]!='H'; i++) {
            c = c * 10 + (s[i]-48);
        }
        pos = i;
    }
    if (s[pos+1]=='\0') h = 1;
    else {
        for (i=pos+1; s[i]!='\0'; i++) {
            h = h * 10 + (s[i]-48);
        }
    }
    cout << c * 12 + h;    
    return 0;
}
