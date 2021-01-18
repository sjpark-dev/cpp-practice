#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    priority_queue<int> pq;
    while (true) {
        cin >> n;
        if (n==-1) {
            break;
        } else if (n==0) {
            if (!pq.empty()) {
                cout << -pq.top() << "\n";
                pq.pop();
            } else cout << -1 << "\n";
        } else pq.push(-n);
    }
    return 0;
}
