#include<iostream>
#include <cstring>  
using namespace std;

int main() {
    char s[101], t[101];
    cin >> s >> t;

    int len1 = strlen(s);
    int len2 = strlen(t);
    bool isReverse = true;

    if(len1 != len2){
        cout << "NO" << endl;
        return 0;
    }

    
    for(int i = 0; i < len1; i++){
        if(s[i] != t[len1 - 1 - i]){
            isReverse = false;
            break;
        }
    }

    if(isReverse){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
