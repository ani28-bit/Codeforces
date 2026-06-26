#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pref[100005];

    cin >> pref[0];

    for (int i = 1; i < n; i++) {
        cin >> pref[i];
        pref[i] += pref[i - 1];
    }

    int m;
    cin >> m;

    while (m--) {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        int ans = n - 1;

        while (l <= r) {
            int mid = (l + r) / 2;

            if (pref[mid] >= x) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans + 1 << endl;
    }

    return 0;
}