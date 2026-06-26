/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int len = s.size();

   
    
        if(len == 1){
           transform(s.begin(), s.end(), s.begin(), ::toupper);
      }

      else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
          s[0] = toupper(s[0]);
      }

cout<<s<<endl;

}*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    bool check = true;

   
    for (int i = 1; i < len; i++) {
        if (islower(s[i])) {
            check = false; 
            break;
        }
    }

   
    if (check) {
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) 
                s[i] = tolower(s[i]);
            else 
                s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}