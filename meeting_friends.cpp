#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && a>c ){
        cout<< (b-a)+(a-c)<<endl;
    }

    else if(a>b && a<c){
        cout<<(a-b)+(c-a)<<endl;
    }

    else if(b>a && b<c){
        cout<<(b-a)+(c-b)<<endl;
    
    }
    else if(b<a && b>c){
        cout<<(a-b)+(b-c)<<endl;
    }
    else if(c>a && c<b){
        cout<<(c-a)+(b-c)<<endl;
    }
    else if(c<a && c>b){
        cout<<(a-c)+(c-b)<<endl;
    }
}