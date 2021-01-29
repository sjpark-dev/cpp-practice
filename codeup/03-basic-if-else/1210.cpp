#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, c = 0;
    for (int i=0; i<2; i++) {
        cin >> a;
        if (a==1) c += 400;
        else if (a==2) c += 340;
        else if (a==3) c += 170;
        else if (a==4) c+= 100;
        else c += 70;
    }
    if (c>500) cout << "angry";
    else cout << "no angry";
    return 0;
}
