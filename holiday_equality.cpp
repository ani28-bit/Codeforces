#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
    }

    int max=a[0];
    int sum =0;

    for(int i=0;i<n;i++){
         if(a[i]>max){
            max = a[i];
         }
    }
    for(int i=0;i<n;i++){
        if(a[i]<max){
            sum = sum + (max - a[i]);
        }
    }

    cout<<sum<<endl;

}