#include<iostream>
#include <cstring>  
using namespace std;

int main() {
    int n;
    cin>>n;
    char s[n+1];
    cin >> s;

      
      int ant=0,dan=0;
        for(int i=0;i<n;i++){

                  if(s[i]=='A'){
                    ant++;
                  }

                  else if(s[i]=='D'){
                    dan++;
                  }

            }

            if(ant==dan){
                cout<<"Friendship"<<endl;
            }

            else if(ant>dan){
                cout<< "Anton"<<endl;
            }
            else{
                cout<< "Danik"<<endl;
            }
    }


        
    
 
