#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;

     while(t--){

        int n;
        cin>>n;

        int a[n];
        bool ok= false;

        for(int i=0;i<n;i++){
              cin>>a[i];

        }
        for(int i=0;i<n;i++){
              if(a[i]== 67){

                 ok = true;    
                  
              } 
        }

        if(!ok){
             cout<<"no"<<endl;
        }
        else{
             cout<<"yes"<<endl;
        }
     }
}