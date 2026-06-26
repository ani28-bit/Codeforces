#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        long long c2a = n / 3;
        long long c1a = n - 2*c2a;
        long long diffA = abs(c1a - c2a);

        long long c2b = n / 3 + 1;
        long long c1b = n - 2*c2b;
        long long diffB = abs(c1b - c2b);

        if (c1b >= 0 && diffB < diffA)
            cout << c1b << " " << c2b << endl;
        else
            cout << c1a << " " << c2a << endl;
    }
}
