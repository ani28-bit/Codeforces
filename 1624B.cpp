#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
          int a,b,c;

          cin>>a>>b>>c;

          bool ok = false;

          int new_a = 2*b - c;
         
          int new_c = 2*b - a;

          if(new_a > 0 && new_a % a ==0){
               ok = true;
          }
          if((a+c) %2==0){
             int new_b = (a+c)/2;

          if(new_b > 0 && new_b % b ==0){
               ok = true;
          }
        }

          if(new_c > 0 && new_c % c ==0){
               ok = true;
          }

          if(ok){
              cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
    }
}