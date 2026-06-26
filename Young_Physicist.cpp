#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][3];

    for(int i=0;i<n;i++){
        for(int j =0;j<3;j++){
             cin>>a[i][j];
        }
    }
    
 bool isZero = true;
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i =0;i<n;i++){
             sum+= a[i][j];
        }
        if(sum != 0){
            isZero = false; 
            break;          
        }
    }
    if(isZero){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}