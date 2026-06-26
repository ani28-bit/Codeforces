#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int current_pass =0;
        int max=0;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

       
        current_pass +=b;
        current_pass-=a;
    
        
        if(current_pass>max){
            max=current_pass;
        }
    }
            cout<<max<<endl;
        
    
}