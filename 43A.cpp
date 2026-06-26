#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;

    string t1, t2;
    int c1 = 0, c2 = 0;

    for(int i=0;i<n;i++){

        cin >> s;

        if(i == 0){

            t1 = s;
            c1++;
        }

        else if(s == t1){

            c1++;
        }

        else{

            t2 = s;
            c2++;
        }
    }

    if(c1 > c2)
        cout << t1 << endl;
    else
        cout << t2 << endl;
}