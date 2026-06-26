#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int freq[101] = {0};

        bool ok = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            freq[a[i]]++;

            if (freq[a[i]] > 1)
                ok = false;
        }

        if (!ok) {
            cout << -1 << endl;
        }
        else {
            sort(a, a + n, greater<int>());

            for (int i = 0; i < n; i++) {
                   cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}