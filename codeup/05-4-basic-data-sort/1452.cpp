#include <iostream>
using namespace std;

int a[100000], tmp[100000];

void merge_sort(int s, int e) {
    int mid, p1, p2, p3, i;
    if (s<e) {
        mid = (s+e) / 2;
        p1 = s;
        p2 = mid + 1;
        p3 = s;
        merge_sort(s, mid);
        merge_sort(mid+1, e);
        while (p1<=mid && p2<=e) {
            if (a[p1]<a[p2]) tmp[p3++] = a[p1++];
            else tmp[p3++] = a[p2++];
        }
        while (p1<=mid) tmp[p3++] = a[p1++];
        while (p2<=e) tmp[p3++] = a[p2++];
        for (i=s; i<=e; i++) {
            a[i] = tmp[i];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j, tmp;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    merge_sort(0, n-1);
    for (i=0; i<n; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
