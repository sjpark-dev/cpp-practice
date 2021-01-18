#include <iostream>
#include <algorithm>
using namespace std;

int a[1000], b[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, tmp, flag;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        a[i] = b[i] = tmp;
    }
    sort(b, b+n);
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (a[j]>a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
        flag = 1;
        for (j=0; j<n; j++) {
            if (a[j]!=b[j]) {
                flag = 0;
                break;
            }
        }
        if (flag==1) {
            cout << i+1;
            break;
        }
    }
    return 0;
}
