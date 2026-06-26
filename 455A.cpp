#include<bits/stdc++.h>
using namespace std;

long long freq[100001];
long long dp[100001];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        freq[x] += x;
    }

    dp[1] = freq[1];

    for(int i = 2; i <= 100000; i++){

        long long take = dp[i-2] + freq[i];

        long long skip = dp[i-1];

        if(take > skip){
            dp[i] = take;
        }
        else{
            dp[i] = skip;
        }
    }

    cout << dp[100000] << endl;
}