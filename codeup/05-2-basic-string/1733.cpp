#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s=="IOI") cout << "IOI is the International Olympiad in Informatics.";
    else cout << "I don't care.";
    return 0;
}
