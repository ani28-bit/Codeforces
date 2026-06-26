#include<bits/stdc++.h>
using namespace std;

int main(){
      string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

      char dir;
      cin>>dir;

      string s2;
      cin>>s2;
        
      for(char ch : s2){
        for(int i=0;i<s1.size();i++ ){

               if(s1[i] == ch){

                    if(dir == 'R'){
                         cout<< s1[i-1];
                    }
                    else{
                        cout<<s1[i+1];
                    }
                    break;
               }
            }
      }
}
