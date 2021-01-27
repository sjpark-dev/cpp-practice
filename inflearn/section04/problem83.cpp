#include <iostream>
using namespace std;

int ch[10], p[8];

int send() {
    return p[0] * 1000 + p[1] * 100 + p[2] * 10 + p[3];
}

int more() {
    return p[4] * 1000 + p[5] * 100 + p[6] * 10 + p[1];
}

int money() {
    return p[4] * 10000 + p[5] * 1000 + p[2] * 100 + p[1] * 10 + p[7];
}

void dfs(int level) {
    if (level==8) {
        if (send()+more() == money()) {
            if (p[0]==0 || p[4]==0) return;
            cout << "  " << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << "\n";
            cout << "+ " << p[4] << " " << p[5] << " " << p[6] << " " << p[1] << "\n";
            cout << "---------\n";
            cout << p[4] << " " << p[5] << " " << p[2] << " " << p[1] << " " << p[7];
        }
    } else {
        for (int i=0; i<10; i++) {
            if (ch[i]==0) {
                ch[i] = 1;
                p[level] = i;
                dfs(level+1);
                ch[i] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dfs(0);
    return 0;
}
