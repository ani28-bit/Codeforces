#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

     char a[4],b[4];
     cin >> a >> b;
     int len = strlen(a);
     for (int i = 0; i < len; i++) {
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);
     }

        swap(a[0],b[0]);
        cout<<a<<" "<<b<<" "<<endl;

    }

}
