#include <iostream>
using namespace std;

int a[101], tmp[101];

void merge_sort(int lt, int rt) {
    int mid, p1, p2, p3, i;
    if (lt<rt) {
        mid = (lt+rt) / 2;
        merge_sort(lt, mid);
        merge_sort(mid+1, rt);
        p1 = lt;
        p2 = mid + 1;
        p3 = lt;
        while (p1<=mid && p2<=rt) {
            if (a[p1]<a[p2]) tmp[p3++] = a[p1++];
            else tmp[p3++] = a[p2++];
        }
        while (p1<=mid) tmp[p3++] = a[p1++];
        while (p2<=rt) tmp[p3++] = a[p2++];
        for (i=lt; i<=rt; i++) {
            a[i] = tmp[i];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    merge_sort(1, n);
    for (i=1; i<=n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
