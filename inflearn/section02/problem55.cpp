#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> s;
    int i, j = 1, n, tmp;
    string res;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> tmp;
        s.push(tmp);
        res += "P";
        while (true) {
            if (s.empty()) break;
            if (j==s.top()) {
                s.pop();
                j++;
                res += "O";
            } else break;
        }
    }
    if (!s.empty()) cout << "impossible";
    else cout << res;
    return 0;
}
