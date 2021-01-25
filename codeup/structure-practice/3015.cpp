#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Data {
    string name;
    int score;
    Data(string a, int b) {
        name = a;
        score = b;
    }
    bool operator<(const Data &b) const {
        return score > b.score;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m, i, b;
    string a;
    vector<Data> d;
    cin >> n >> m;
    for (i=0; i<n; i++) {
        cin >> a >> b;
        d.push_back(Data(a, b));
    }
    stable_sort(d.begin(), d.end());
    for (i=0; i<m; i++) {
        cout << d[i].name << "\n";
    }
    return 0;
}
