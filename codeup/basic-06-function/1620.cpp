#include <iostream>
using namespace std;

int f(int x) {
    int sum = 0;
    while (x>0) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    while (n>=10) {
        n = f(n);
    }
    cout << n;
    return 0;
}
