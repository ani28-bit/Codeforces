#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    cin>>s;
    int len= s.length();

    int count =1;

    for(int i=1;i<len;i++){
           if(s[i]==s[i-1]){
            count++;

            if(count>=7){
                cout<< "YES"<<endl;
                return 0;
            }  

           }
           else{
              count = 1;
           }
    }
    cout << "NO"<<endl;
}

