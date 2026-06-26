#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int count =0;

        if(s1==s2 || s1==s3 || s1==s4){
            count++;
        }
          if(s2==s3 || s2==s4 ){
            count++;
        }
         if(s3==s4){
            count++;
        }
         
         
            cout<<count<<endl;
        
}