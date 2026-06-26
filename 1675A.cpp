#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    int a,b,c,x,y;

     cin>>a>>b>>c>>x>>y;
     int dog = max(0,x - a);
     int cat = max(0,y- b);

     if(cat+dog <= c) {

             cout<<"YES"<<endl;
    }

    else{
          cout<<"NO"<<endl;
      }

    }

}