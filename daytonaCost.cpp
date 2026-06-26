#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int found=0;

        for(int i=0;i<n;i++){
            if(a[i]==k){
                found++;
            }
        }

        if(found!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}