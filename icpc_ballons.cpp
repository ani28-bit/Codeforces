#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        char s[n+1];
        cin>>s;

        bool b[26]={false};
        int ballons=0;

        for(int i=0;i<n;i++){
            s[i]= toupper(s[i]);

            int idx = s[i]-'A';

            if(b[idx]){
                ballons+=1;
            }
            else{
                ballons+=2;
                b[idx]= true;
            }
        }
        cout<<ballons<<endl;
    }
}