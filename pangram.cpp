#include<iostream>
#include<cctype> 
using namespace std;

int main(){
    int n;
    cin >> n;

    char s[n+1];
    cin >> s;

    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }

    int freq[26] = {0}; 

    for(int i = 0; i < n; i++){
        char ch = tolower(s[i]); 
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] == 0){ 
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
