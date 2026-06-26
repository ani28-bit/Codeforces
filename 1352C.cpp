#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        long long n,k;
        cin >> n >> k;

        long long ans;

        if(k % (n-1) == 0){
            ans = k + (k/(n-1)) - 1;
        }
        else{
            ans = k + (k/(n-1));
        }

        cout << ans << endl;
    }

    return 0;
}