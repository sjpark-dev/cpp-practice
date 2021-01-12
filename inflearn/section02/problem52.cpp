#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, p2, p3, p5, mn;
    cin >> n;
    vector<int> a(n+1);
    a[1] = 1;
    p2 = p3 = p5 = 1;
    for (i=2; i<=n; i++) {
        if (a[p2]*2<a[p3]*3) mn = a[p2] * 2;
        else mn = a[p3] * 3;
        if (a[p5]*5<mn) mn = a[p5] * 5;
        if (a[p2]*2==mn) p2++;
        if (a[p3]*3==mn) p3++;
        if (a[p5]*5==mn) p5++;
        a[i] = mn;
    }
    cout << a[n];
    return 0;
}
