#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int used = a;
    int hour = a;
    int New;

    while(used >= b){
         New = used/b;
         hour += New;
         
         used = (used%b)+ New;
    }
    cout<<hour<<endl;
}