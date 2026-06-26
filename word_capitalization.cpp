#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length();
    s[0]= toupper(s[0]);

    cout<<s;
}