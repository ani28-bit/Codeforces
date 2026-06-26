#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b && a!=c){
            cout<<c<<endl;
        }
        else if(a==c && a!=b){
            cout<<b<<endl;
        }
        else if(b==c && b!=a){
            cout<<a<<endl;
        }
        else if(b==a && b!=c){
            cout<<c<<endl;
        }
        else if(c==a && c!=b){
            cout<<b<<endl;
        }
        else if(c==b && c!=a){
            cout<<a<<endl;
        }
    }
}