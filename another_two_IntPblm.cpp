#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;

        cin>>a>>b;


        if(a==b){

            cout<<"0"<<endl;   
        }

        else{
            long long d = a-b;

            if(d<0){

                d=-d;
            
            }
            int moves = d/10;

            if(d%10!=0){

                 moves++;
            }
            cout<<moves<<endl;
        }
    }
}