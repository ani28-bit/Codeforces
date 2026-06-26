#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long a[n];
        long long v[n + 1]; // কোন সংখ্যা আগে এসেছে
        long long b[n];     // duplicate বা বড় সংখ্যা
        long long c[n];     // missing সংখ্যা

        long long bi = 0, ci = 0;

        // v[] শুরুতে 0 করা
        for (long long i = 0; i <= n; i++)
            v[i] = 0;

        // ইনপুট নেওয়া
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= n) {
                if (v[a[i]] == 0)
                    v[a[i]] = 1;
                else
                    b[bi++] = a[i]; // duplicate সংখ্যা
            } else {
                b[bi++] = a[i]; // n এর চেয়ে বড় সংখ্যা
            }
        }

        // missing সংখ্যা খুঁজে বের করা
        for (long long i = 1; i <= n; i++) {
            if (v[i] == 0)
                c[ci++] = i;
        }

        // duplicate array sort করা
        sort(b, b + bi);

        bool bad = false;

        // শর্ত চেক করা
        for (long long i = 0; i < bi; i++) {
            if (2 * c[i] >= b[i]) {
                bad = true;
                break;
            }
        }

        if (bad)
            cout << "-1\n";
        else
            cout << bi << "\n";
    }

    return 0;
}
