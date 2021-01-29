#include <iostream>
#include <vector>
using namespace std;

struct Data {
    int score;
    int rank;
    Data (int a, int b) {
        score = a;
        rank = b;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, a, i, j, r;
    vector<int> b;
    vector<Data> d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a;
        b.push_back(a);
    }
    for (i=0; i<n; i++) {
        r = 1;
        for (j=0; j<n; j++) {
            if (b[j]>b[i]) r++;
        }
        d.push_back(Data(b[i], r));
    }
    for (i=0; i<n; i++) {
        cout << d[i].score << " " << d[i].rank << "\n";
    }
    return 0;
}
