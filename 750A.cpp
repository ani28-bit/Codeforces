#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

      int time = 0,count = 0;
      int available = 240 -k;

      for(int i = 1;i <= n;i++){
           time += 5*i;

           if(time > available ){
                 break;

           }

             count++;
      }
      cout<<count<<endl;
}