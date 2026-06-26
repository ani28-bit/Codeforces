#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int count=0;

    for(int i=0;t[i]!='\0';i++){
        if(s[0]==t[i]){
            count++;
        }
    }
    cout<<count<<endl;
}