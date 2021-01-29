#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Data {
    string name;
    int year;
    int month;
    int day;
    Data (string a, int b, int c, int d) {
        name = a;
        year = b;
        month = c;
        day = d;
    }
    bool operator<(Data &b) {
        if (year==b.year) {
            if (month==b.month) {
                if (day==b.day) {
                    return name <= b.name;
                } else return day <= b.day;
            } else return month <= b.month;
        } else return year <= b.year;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, i, b, c, g;
    string a;
    vector<Data> d;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a >> b >> c >> g;
        d.push_back(Data(a, b, c, g));
    }
    sort(d.begin(), d.end());
    for (i=0; i<n; i++) {
        cout << d[i].name << "\n";
    }
    return 0;
}
