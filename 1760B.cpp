#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;

     while(t--){
        int n;
        cin>>n;

        string s;

        cin>>s;
        char max = 'a';

        for(char c : s){
              if(c> max){

                   max = c;
              }
        }

        cout<<max - 'a' + 1<<endl;
     }
}