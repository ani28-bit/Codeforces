#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;

int main() {
    char s1[101], s2[101];
    cin >> s1 >> s2;

    int len = strlen(s1);

    for (int i = 0; i < len; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {
            cout << "-1" << endl;
            return 0;
        } else if (c1 > c2) {
            cout << "1" << endl;
            return 0;
        }
    }

    
    cout << "0" << endl;
    return 0;
}
