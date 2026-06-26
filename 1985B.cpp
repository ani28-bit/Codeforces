#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int mxSum = 0;
        int ans = 2;

        for(int x = 2; x <= n; x++) {

            int sum = 0;

            for(int multiple = x; multiple <= n; multiple += x) {
                sum += multiple;
            }

            if(sum > mxSum) {
                mxSum = sum;
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}