#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int a[7];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    for (i=0; i<7; i++) {
        cin >> a[i];
    }
    sort(a, a+7, greater<int>());
    cout << a[0] << "\n" << a[1];
    return 0;
}
