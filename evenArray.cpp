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
        int w_even=0,w_odd=0;

        for(int i=0;i<n;i++){

            if(i%2 != a[i]%2){
                if(i%2==0){
                    w_even++;
                }
                else{

                 w_odd++;
                }
           }

  }

  if(w_even!=w_odd){
    cout<<"-1"<<endl;
  }

  else{
    cout<<w_odd<<endl;
    }

  }
}