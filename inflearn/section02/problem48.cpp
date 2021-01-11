#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, sum, avg, diff, tmp, res;
    vector<vector<int>> v(9, vector<int>(9));
    for (i=0; i<9; i++) {
        sum = 0;
        for (j=0; j<9; j++) {
            cin >> v[i][j];
            sum += v[i][j];
        }
        avg = sum / 9.0 + 0.5;
        cout << avg << " ";
        diff = 2147000000;
        for (j=0; j<9; j++) {
            tmp = abs(v[i][j]-avg);
            if (tmp<diff) {
                diff = tmp;
                res = v[i][j];
            } else if (tmp==diff) {
                if (v[i][j]>res) res = v[i][j];
            }
        }
        cout << res << "\n";
    }
    return 0;
}
