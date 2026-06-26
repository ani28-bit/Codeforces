#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;

    int a[n];
    int sum=0;

    for(int i=0;i<n;i++){
         cin>>a[i];

         if(a[i]>h){
             sum=sum + 2;
         }

         else{
            sum=sum+1;
         }
    }

    cout<<sum<<endl;
}