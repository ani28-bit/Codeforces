#include <iostream>
#include <cstring>  
using namespace std;

int main() {
    char s[101];
    cin >> s;

    int len = strlen(s);
    
    
    for (int i = 0; i < len; i += 2) {
        for (int j = i + 2; j < len; j += 2) {
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }

    cout << s << endl;
    return 0;
}
