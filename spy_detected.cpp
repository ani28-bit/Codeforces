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
         
        int idx=-1;

        if(a[0]!=a[1]){
            if(a[0]==a[2]){
                idx=1;
            }
            else{
                idx=0;
            }
        }

            else{
                for(int i=2;i<n;i++){
                     if(a[i]!=a[0]){
                        idx=i;
                        break;
                     }
                }
            }
        
       
        cout<<idx + 1<<endl;
    }
}
