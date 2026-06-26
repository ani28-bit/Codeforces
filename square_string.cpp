#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
    char s[100];
    cin>>s;

    int len=strlen(s);
     
    if(len%2!=0){
        cout<<"NO"<<endl;
    }

    else{
        int mid = len/2;

        int square=1;

        for(int i=0;i<mid;i++){
            if(s[i]!=s[mid+i]){
                square=0;
                break;
            }
        }
    
        if(square){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

     }

  }
}