#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[105];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Manual sorting (bubble sort)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    long long temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        int ans = n - 1;
        int left = 0;

        int i = 0;
        while (i < n) {
            int freq = 1;
            int j = i + 1;

            while (j < n && a[j] == a[i]) {
                freq++;
                j++;
            }

            int right = n - left - freq;

            int calls;
            if (left > right)
                calls = left;
            else
                calls = right;

            if (calls < ans)
                ans = calls;

            left += freq;
            i = j;
        }

        cout << ans << endl;
    }

    return 0;
}