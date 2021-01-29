#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Data {
    string name;
    int number;
    Data (string a, int b) {
        name = a;
        number = b;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m, b, i, j;
    string a;
    vector<Data> d;
    cin >> n >> m;
    for (i=0; i<n; i++) {
        cin >> a >> b;
        for (j=0; j<d.size(); j++) {
            if (d[j].name==a) break;
        }
        if (j==d.size()) d.push_back(Data(a, b));
        else d[j].number += b;
    }
    for(i=0; i<m; i++) {
        cin >> a;
        for (j=0; j<d.size(); j++) {
            if (d[j].name==a) break;
        }
        if (j==d.size()) cout << 0 << "\n";
        else cout << d[j].number << "\n";
    }
    return 0;
}
