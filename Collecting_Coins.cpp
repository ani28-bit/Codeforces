#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b,c,n,x,total;

        cin>>a>>b>>c>>n;

        total = a+b+c+n;

        if((total%3)!=0){

            cout<<"NO"<<endl;
        }
        else{
            x= total/3;

            if(x >= max({a,b,c})){

                cout<<"YES"<<endl;
            }
            else{

                cout<<"NO"<<endl;
            }
        }
    }
}