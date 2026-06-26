/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int m;
    cin>>m;

    while(m--){
        int l,r,count=0;
        cin>>l>>r;

        for(int i=l;i<r;i++){
            if(s[i-1] == s[i]){
                count ++;
            }
        }

        cout<<count<<endl;
    }
}*/


#include<bits/stdc++.h>
using namespace std;

int main(){
   

    string s;
    cin >> s;

    int n = s.size();

    int pref[100005] = {0};

    // build prefix of adjacent matches
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + (s[i] == s[i-1]);
    }

    int m;
    cin >> m;

    while(m--){
        int l, r;
        cin >> l >> r;

        l--; r--;

        // answer = pairs inside [l, r]
        cout << pref[r] - pref[l] << "\n";
    }
}