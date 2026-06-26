#include<bits/stdc++.h>
using namespace std;

int main(){

    
        int n,x;

        cin>>n;

      int mn = INT_MAX;

        for(int i=0;i<n;i++){

            cin>>x;

            mn = min(mn,abs(x));
        }

       

       

       cout<<mn<<endl;
    }
