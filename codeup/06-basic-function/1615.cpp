#include <iostream>
using namespace std;

int n[5001];

int d(int x) {
    int sum = x;
    while (x>0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int a, b, i, sum = 0;
    cin >> a >> b;
    for (i=1; i<=b; i++) {
        n[d(i)] = 1;
    }
    for (i=a; i<=b; i++) {
        if (n[i]==0) sum += i;
    }
    cout << sum;
    return 0;
}
