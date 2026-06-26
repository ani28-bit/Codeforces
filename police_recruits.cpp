#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int available_police=0;
    int untreated_crime=0;
    for(int i=0;i<n;i++){
        if(a[i]>=1){
            available_police+=a[i];
        }
        else{
             if(available_police>0){
                available_police--;
             }
             else{
                untreated_crime++;
             }
        }
    }

    cout<<untreated_crime<<endl;
}