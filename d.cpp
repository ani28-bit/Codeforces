#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char S[26];
    cin >> S;

    
    bool used[26] = {false};

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            used[S[i] - 'a'] = true;
        }
    }
 
    for (int i = 0; i < 26; i++) {
        if (!used[i]) {
            char missing = 'a' + i;
            cout << missing << endl;
            return 0;
        }
    }


    cout << "None" << endl;
    return 0;
}
