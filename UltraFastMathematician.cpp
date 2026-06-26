#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s1[101],s2[101];

    cin>>s1>>s2;

    

    for(int i=0;s1[i]!='\0';i++){
           if(s1[i]==s2[i]){
              cout<<"0";
           }

        
           else{
              cout<<"1";
           }
           
    }

}

