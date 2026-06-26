#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n,k;
    cin>>n>>k;
    long long ans;

    long long odd = (n+1)/2;

    if(k<=odd){
        ans = 2*k -1 ;
    }
    else{
        k=k-odd;
        ans = 2*k;
    }

    cout<<ans<<endl;
}
