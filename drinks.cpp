#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

       sum= sum+a[i];
    }

     double av=(double)sum/100.000000;
     double res = (av/n) * 100.00000;
     cout<<res<<endl;
    
       
}