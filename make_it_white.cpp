#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
         cin>>s;
         int fb=-1,lb=-1,step;

         for(int i=0;i<n;i++){
            if(s[i]=='B'){

               if(fb==-1){
                fb=i;
               }
                lb=i;
               
            }
         }
          step=(lb-fb)+1;
          cout<<step<<endl;

    }
}