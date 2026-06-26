#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // compute prefix sums modulo 3
        vector<int> prefix(n);
        prefix[0] = a[0] % 3;
        for(int i = 1; i < n; i++) {
            prefix[i] = (prefix[i-1] + a[i]) % 3;
        }
        
        bool found = false;
        for(int l = 0; l < n-2 && !found; l++) {
            for(int r = l+1; r < n-1; r++) {
                int s1 = prefix[l];
                int s2 = (prefix[r] - prefix[l] + 3) % 3; // ensure non-negative
                int s3 = (prefix[n-1] - prefix[r] + 3) % 3; // ensure non-negative
                
                if ( (s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3) ) {
                    cout << l+1 << " " << r+1 << "\n";
                    found = true;
                    break;
                }
            }
        }
        if(!found) cout << "0 0\n";
    }
    return 0;
}
