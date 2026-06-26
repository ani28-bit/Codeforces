#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int s1,s2,s3,s4;

        cin>>s1>>s2>>s3>>s4;

        int m1 = max(s1,s2);
        int m2 = max(s3,s4);

        vector<int>a ={s1,s2,s3,s4};
        sort(a.begin(),a.end());

        int b1= a[3];
        int b2=a[2];

        if((m1 == b1 && m2 == b2)|| m2 ==b1 && m1==b2) {
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }
}