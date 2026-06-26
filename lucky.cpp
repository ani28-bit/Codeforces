#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char s[7];

        cin>>s;


        if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5])){
                     cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}