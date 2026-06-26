#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int s[n];

        for(int i =0;i<n;i++){
            cin>>s[i];
        }

        sort(s,s+n);
        int mn = INT_MAX;

        for(int i=0;i<n-1;i++){
           int d = s[i+1]-s[i];
           mn = min(mn,d);

        }

        cout<<mn<<endl;


    }
}
