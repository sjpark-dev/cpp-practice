#include <iostream>

using namespace std;

int main() {
    char ssn[20];
    int age;

    cin >> ssn;
    
    if (ssn[7] == '1' || ssn[7] == '2') age = 2019 - (1900 + (ssn[0] - 48) * 10 + (ssn[1] - 48)) + 1;
    else age = 2019 - (2000 + (ssn[0] - 48) * 10 + (ssn[1] - 48)) + 1;

    cout << age << + " ";
    
    if (ssn[7] == '1' || ssn[7] == '3') cout << "M";
    else cout << "W";

    return 0;
}

/*
ASCII
'A'~'Z' 65~90
'a'~'z' 97~122
'0'~'9' 48~57
*/
