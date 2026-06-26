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
        int max_blank=0,current_blank=0;

        for(int i=0;i<n;i++){
               if(a[i]==0){
                 current_blank++;
               

               if(current_blank>max_blank){
                     max_blank=current_blank;
               }
            }
               else{
                  current_blank=0;
               }
        }

        cout<<max_blank<<endl;
    }
}