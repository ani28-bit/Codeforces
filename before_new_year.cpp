#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long h,m;

        cin>>h>>m;

        cout<< 1440-((h*60)+m)<<endl;
    }
}