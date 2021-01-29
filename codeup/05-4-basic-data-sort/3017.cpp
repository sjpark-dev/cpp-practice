#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int num;
    int math;
    int info;
};

Student a[1000];

bool compare(Student &a, Student &b) {
    if (a.math==b.math) {
        if (a.info==b.info) return a.num < b.num;
        else return a.info > b.info;
    } else return a.math > b.math;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=0; i<n; i++) {
        a[i].num = i + 1;
        cin >> a[i].math;
        cin >> a[i].info;
    }
    sort(a, a+n, compare);
    for (i=0; i<n; i++) {
        cout << a[i].num << " " << a[i].math << " " << a[i].info << "\n";
    }
    return 0;
}
