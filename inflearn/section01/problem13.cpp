#include <iostream>
#include <string>

using namespace std;

int n[10];

int main() {
    string s;
    int i, max = -2147000000, mn;

    cin >> s;

    for (i=0; i<s.length(); i++) {
        n[s[i]-48]++;
    }

    for (i=0; i<10; i++) {
        if (n[i] >= max) {
            max = n[i];
            mn = i;
        }
    }

    cout << mn;

    return 0;
}
