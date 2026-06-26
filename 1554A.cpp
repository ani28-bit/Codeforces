#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;

        cin>>n;

        long long a[n];


        for(int i=0;i<n;i++){
              cin>>a[i];
        }
        long long mx = 0;

        for(int i= 1;i<n;i++){
             long long mul = a[i] * a[i-1];

              mx = max(mx,mul);
        }

        cout<<mx<<endl;
    }
}