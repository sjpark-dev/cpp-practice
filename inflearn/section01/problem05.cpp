#include <iostream>
#include <string>

using namespace std;

// solution 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    string s;
    cin >> s;
    
    if (s[7] == '1' || s[7] == '2') y = 1900 + stoi(s.substr(0, 2));
    else y = 2000 + stoi(s.substr(0, 2));

    cout << 2019 - y + 1 << " ";

    if (s[7] == '1' || s[7] == '3') cout << "M";
    else cout << "W";

    return 0; 
}

// solution 1
// int main() {
//     char ssn[20];
//     int age;

//     cin >> ssn;
    
//     if (ssn[7] == '1' || ssn[7] == '2') age = 2019 - (1900 + (ssn[0] - 48) * 10 + (ssn[1] - 48)) + 1;
//     else age = 2019 - (2000 + (ssn[0] - 48) * 10 + (ssn[1] - 48)) + 1;

//     cout << age << + " ";
    
//     if (ssn[7] == '1' || ssn[7] == '3') cout << "M";
//     else cout << "W";

//     return 0;
// }

/*
ASCII
'A'~'Z' 65~90
'a'~'z' 97~122
'0'~'9' 48~57
*/
