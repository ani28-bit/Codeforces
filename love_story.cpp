#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char s[11];
        char s1[11] = "codeforces";

        cin>>s;
        int count=0;

        for(int i=0;s[i]!='\0';i++){
            
                if(s[i]!= s1[i]){
                    count++;
                }
            

        }
      cout<<count<<endl;

    }
}