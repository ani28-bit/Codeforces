#include<iostream>
using namespace std;
int main(){
    long long n;
    
    cin>>n;

     int lucky=0;
         while(n>0){
               int digit=n%10;
            if((digit==7) || (digit==4)){
                   lucky++;
        }
        n=n/10;
    }
        
        if((lucky==4) || (lucky ==7)){
           cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }


        
    
 
