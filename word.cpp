#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;

 int main() {
    char s[101];
    cin>>s;
    int uper=0,lower=0;
    int len= strlen(s);
      for(int i=0;i<len;i++){
         if(s[i]>='A'&& s[i]<='Z' ){
            uper++;
        }
          else if(s[i]>='a'&& s[i]<='z' ){
              lower++;
     }
    }
     
    for(int i=0;i<len;i++){

        if(uper<=lower){
            s[i]= tolower (s[i]);

           cout<<s[i];
 }

    else {
          s[i]= toupper (s[i]);

               cout<<s[i];
     }

   }
}
