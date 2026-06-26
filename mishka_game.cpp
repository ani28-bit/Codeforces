#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   int mish=0,cris=0;

    for(int i=1;i<=n;i++){
        int m,c;
        cin>>m>>c;

        if(m>c){
            mish++;
        }
        else if(m<c){
            cris++;

        }
    }

    if(mish==cris){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(mish>cris){
        cout<<"Mishka"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }
}