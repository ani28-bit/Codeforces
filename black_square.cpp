#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
      
    char s[1000001];
    cin>>s;
    int len = strlen(s);
    int sum=0;
    for(int i=0;i<len;i++){
        sum = sum + a[(s[i]-'0')-1];
    }
    cout<<sum<<endl;
}