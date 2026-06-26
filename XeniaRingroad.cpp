#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;

    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    long long current= 1,time=0;

    for(int i=0;i<m;i++){
        if(a[i]>= current){
            time += a[i]- current ;
        }
        else{
            time+= (n-current)+ a[i];
        }
        current = a[i];
    }
    cout<<time<<endl;


}