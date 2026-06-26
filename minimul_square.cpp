#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;


        int side1 = max(2*a,b);
        int side2 = max(a,2*b);

        int side = min(side1,side2);

        cout<< side*side <<endl;
    }
}