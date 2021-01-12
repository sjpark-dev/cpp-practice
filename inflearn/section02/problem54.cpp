#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    string b;
    stack<char> s;
    cin >> b;
    for (i=0; i<b.length(); i++) {
        if (b[i]=='(') s.push(b[i]);
        else {
            if (!s.empty()) s.pop();
            else {
                cout << "NO";
                return 0;
            }
        }
    }
    if (s.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}
