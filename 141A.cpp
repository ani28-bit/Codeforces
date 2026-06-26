#include<bits/stdc++.h>

using namespace std;

int main(){

    string guest,host,pile;
    cin>> guest>>host>>pile;

    string combine = guest + host;

    sort( combine.begin(),combine.end());
    sort(pile.begin(),pile.end());

    if(combine == pile){
         cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
}