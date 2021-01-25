#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data {
    int country;
    int student;
    int score;
    Data (int a, int b, int c) {
        country = a;
        student = b;
        score = c;
    }
    bool operator<(Data &b) {
        return score > b.score;
    }
};

int ch[101];

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, a, b, c, i, cnt = 0;
    vector<Data> d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a >> b >> c;
        ch[a] = 2;
        d.push_back(Data(a, b, c));
    }
    sort(d.begin(), d.end());
    i = 0;
    while (true) {
        if (ch[d[i].country]>0) {
            cnt++;
            cout << d[i].country << " " << d[i].student << "\n";
            ch[d[i].country]--;
        }
        if (cnt==3) break;
        i++;
    }
    return 0;
}
