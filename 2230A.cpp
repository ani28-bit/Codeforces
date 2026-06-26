#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long full = n / 3;
        long long rem = n % 3;

        long long cost = full * min(3 * a, b);

        cost += min(rem * a, b);

        cout << cost << endl;
    }
}