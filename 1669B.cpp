#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int a[n];
        int freq[n+1] = {0};

        for(int i = 0; i < n; i++){

            cin >> a[i];

            freq[a[i]]++;
        }

        int ans = -1;

        for(int i = 1; i <= n; i++){

            if(freq[i] >= 3){

                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}