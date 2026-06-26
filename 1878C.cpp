#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long mn = k * (k + 1) / 2;
        long long mx = k * (2 * n - k + 1) / 2;

        if (x >= mn && x <= mx){
              cout << "YES"<<endl;
        }
        else{
               cout << "NO"<<endl;
        }
    }

    return 0;
}