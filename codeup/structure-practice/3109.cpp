#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Data {
    int number;
    string name;
    Data (int a, string b) {
        number = a;
        name = b;
    }
    bool operator<(Data &b) {
        return number <= b.number;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, b, i, j, tmp;
    char a;
    string c;
    vector<Data> d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a >> b >> c;
        if (a=='I') {
            for (j=0; j<d.size(); j++) {
                if (d[j].number==b) break;
            }
            if (j==d.size()) d.push_back(Data(b, c));
            else d.insert(d.begin()+j, Data(b, c));
        } else {
            for (j=0; j<d.size(); j++) {
                if (d[j].number==b) break;
            }
            if (j!=d.size()) d.erase(d.begin()+j);
        }
    }
    sort(d.begin(), d.end());
    for (i=0; i<5; i++) {
        cin >> tmp;
        cout << d[tmp-1].number << " " << d[tmp-1].name << "\n";
    }
    return 0;
}
