#include <iostream>
#include <stack>
#include <iomanip>
using namespace std;

// solution 2
int s[100], top = -1;

void push(int x) {
    s[++top] = x;
}

int pop() {
    return s[top--];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    char hex[20] = "0123456789ABCDEF";
    cin >> n >> k;
    while (n>0) {
        push(n%k);
        n /= k;
    }
    while (top!=-1) {
        cout << hex[pop()];
    }
    return 0;
}

// solution 1
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k;
//     stack<int> s;
//     cin >> n >> k;
//     while (n>0) {
//         s.push(n%k);
//         n /= k;
//     }
//     while (!s.empty()) {
//         cout << uppercase << hex << s.top();
//         s.pop();
//     }
//     return 0;
// }
