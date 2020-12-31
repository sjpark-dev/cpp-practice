#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    b += (90-a) / 5;
    if ((90-a)%5 != 0) b++;
    cout << b; 
    return 0;
}
