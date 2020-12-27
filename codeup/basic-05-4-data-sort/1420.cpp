#include <iostream>

using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    Student s[51], temp;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> s[i].name >> s[i].score;
    }

    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1-i; j++) {
            if (s[j].score < s[j+1].score) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    cout << s[2].name;

    return 0;
}
