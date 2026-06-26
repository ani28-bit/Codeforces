#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cin>>a>>b;

    if(a>b){
       r= (a-b)/2;
        cout<<b<<" "<<r<<endl;
    }
    else{
          r= (b-a)/2;
        cout<<a<<" "<<r<<endl;
    }
}