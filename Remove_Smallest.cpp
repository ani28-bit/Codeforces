#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
              cin>>a[i];
        }

        

        bool ok = true;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                    if(a[j+1]<a[j]){
                        int t = a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }
            }
        }

        for(int i=0;i<n-1;i++){
            
               if(a[i+1] - a[i] > 1){
                 ok = false;
               }
              
        }

        if(ok){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
}