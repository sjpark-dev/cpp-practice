#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, tmp;
    cin >> n;
    vector<int> ch(n+1);

    for (i=2; i<=n; i++) {
        tmp = i;
        j = 2;

        while(true) {
            if (tmp%j == 0) {
                tmp /= j;
                ch[j]++;

                if (tmp == 1) break;
            } else j++;
        }
    }

    cout << n << "! = ";

    for (i=2; i<=n; i++) {
        if (ch[i]!=0) cout << ch[i] << " ";
    }

    return 0;
}
