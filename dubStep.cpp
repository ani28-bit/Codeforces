#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(i+2 < s.size() && s.substr(i,3) == "WUB"){
                s[i] = ' ';
                s[i+1] = ' ';
                s[i+2]= ' ';

                i+=2;
          }
        }
         stringstream ss(s);
        string word;

    while (ss >> word) {
        cout << word << " ";
    }

    cout << endl;

    }
