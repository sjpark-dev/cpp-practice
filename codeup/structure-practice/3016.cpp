#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Data {
    string name;
    int score1;
    int score2;
    int score3;
    Data(string a, int b, int c, int d) {
        name = a;
        score1 = b;
        score2 = c;
        score3 = d;
    }
    bool operator<(Data &b) {
        return score1 > b.score1;
    }
};

bool compare1(Data &a, Data &b) {
    return a.score2 > b.score2;
}

bool compare2(Data &a, Data &b) {
    return a.score3 > b.score3;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, i, b, c, g, tmp1, tmp2;
    string a;
    vector<Data> d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a >> b >> c >> g;
        d.push_back(Data(a, b, c, g));
    }
    sort(d.begin(), d.end());
    cout << d[0].name << " ";
    tmp1 = d[0].score1;
    sort(d.begin(), d.end(), compare1);
    for (i=0; i<n; i++) {
        if (d[i].score1==tmp1) tmp2 = d[i].score2;
    }
    for (i=0; i<n; i++) {
        if (d[i].score2==tmp2) {
            cout << i + 1 << " ";
            break;
        }
    }
    sort(d.begin(), d.end(), compare2);
    for (i=0; i<n; i++) {
        if (d[i].score1==tmp1) tmp2 = d[i].score3;
    }
    for (i=0; i<n; i++) {
        if (d[i].score3==tmp2) {
            cout << i + 1 << " ";
            break;
        }
    }
    return 0;
}
