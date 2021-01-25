#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data {
    int n;
    int g;
    Data () {}
    Data (int a, int b) {
        n = a;
        g = b;
    }
    bool operator<(Data &b) {
        return n < b.n;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, a, b;
    vector<Data> d;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        d.push_back(Data(a, b));
    }
    sort(d.begin(), d.end());
    for (int i=0; i<n; i++) {
        cout << d[i].n << " " << d[i].g << "\n";
    }
    return 0;
}
