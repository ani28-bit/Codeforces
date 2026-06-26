#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;

int main() {
    char s[101];
    cin>>s;

    int len= strlen(s);
    for(int i=0;i<len;i++){
        if( s[i]>='A' && s[i]<='Z'){
            cout<<s[i];
        }
    }
}
