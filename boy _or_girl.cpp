#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        bool unique = true;//1
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                unique = false;//0
                break;
            }
        }
        if (unique) 
            count++;
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
