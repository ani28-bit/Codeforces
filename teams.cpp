#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int a[3];
        

        for(int i =0;i<3;i++){
            cin>>a[i];
        }

            if(a[0]+a[1]+a[2]>=2){
                count++;
            }
        
    }
        
            cout<<count<<endl;
        
        
    }
