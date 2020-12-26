#include <iostream>

using namespace std;

// if declared globally, array is filled with zeros.
// if declared locally, array may be filled with garbage values.
int a[50001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j += i) {
            a[j]++; 
        }

        cout << a[i] <<  " ";
    }

    return 0;
}
