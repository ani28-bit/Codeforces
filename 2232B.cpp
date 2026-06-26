#include <iostream>
using namespace std;

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        long long mn = 1e18;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            sum += x;

            long long cur = sum / i;  

            if (cur < mn){
                   mn = cur;
            }

            cout << mn;

            if (i < n){
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}