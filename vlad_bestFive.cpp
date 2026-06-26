#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[6];

        cin>>s;
        int count1=0,count2=0;

        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='A'){
                count1++;
            }
            else{
                count2++;
            }
        }

        if(count1>count2){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
}