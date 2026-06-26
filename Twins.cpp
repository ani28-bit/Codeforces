#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,totalSum=0;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];

        totalSum += a[i];
    }

    sort(a.begin(),a.end(),greater<int>());
     
    int mySum=0,count=0;

    for(int i=0;i<n;i++){
         mySum += a[i];
         totalSum -= a[i];
         count++;

         if(mySum > totalSum){
            break; 
         }
    }

    cout<<count<<endl;

}