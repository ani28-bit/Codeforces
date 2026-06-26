#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int y,b,r;
    cin>>y>>b>>r;
   
    int x = min(y,min(b-1,r-2));

    
    cout<< 3*x + 3 <<endl;
}