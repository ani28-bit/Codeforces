#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;

    float p =(n+a-1)/a;
    float q = (m+a-1)/a;

    float ans = p*q;
    cout<<ans<<endl;

}