#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n;
        scanf("%d", &n);   

        long long a[n];
         long long a0=0,a1=0;

         for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i]==0){
                a0++;
            }

            if(a[i]==1){
                a1++;
            }
         }

         if(a1>0){
            if(a0>0){
                cout<<"NO"<<endl;
            }
           else{
            bool found=false;
            sort(a,a+n);

            for(int i=1;i<n;i++){
                if(a[i]-a[i-1]==1){
                    found=true;
                    break;
                }
            }

         if(found){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }

        }
    }

    else{
        cout<<"Yes"<<endl;
    }
    
}

}
