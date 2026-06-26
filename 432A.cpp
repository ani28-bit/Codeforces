#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    int count =0;

    for(int i=0;i<n;i++){
        int y;
        cin>>y;

        if(5- y >= k){
            count++;
        }
    }
    cout<<count/3<<endl;
}