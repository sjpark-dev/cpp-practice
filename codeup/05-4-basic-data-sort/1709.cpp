#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int a[101], n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
