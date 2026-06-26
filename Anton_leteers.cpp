#include<bits/stdc++.h>
using namespace std;

int main(){

       string str;
       getline(cin,str);

       set<char>s;

       for(char c : str){
          if(c >= 'a'  && c <='z'){
                 s.insert(c);
          }
       }
               cout<<s.size()<<endl;
   }