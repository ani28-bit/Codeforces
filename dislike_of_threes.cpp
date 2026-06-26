#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int k,num=1,count=0;
        cin>>k;

        while(true){

            if(num%3!=0 && num%10!=3){
                count++;

                if(count==k){
                    cout<<num<<endl;
                    break;
                }
                
            }
             num++;
        }
    }

    return 0;
}
