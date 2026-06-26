#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

          int  sum1=0,sum2=0;

         for(int i=0;i<n;i++){
            if(a[i]%2==0){

                sum1+=a[i];
            }
            else{
                sum2+=a[i];
            }
    }

    if((sum1%2==0 && sum2%2==0) || (sum1%2!=0 && sum2%2!=0)){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
}

}