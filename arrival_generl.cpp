#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int imax=0,imin=0;

    int max=a[0],min= a[0];

    for(int i=0;i<n;i++){
        if(a[i]>max){

            max=a[i];
            imax=i;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]<=min){

            min=a[i];
            imin=i;
        }
    }

    int ans;

    if(imax<imin){
        ans= imax + (n-1-imin);
    }

    else{
        ans = imax + (n-1-imin)-1;
    }

    cout<<ans<<endl;
}