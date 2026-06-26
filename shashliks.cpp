#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long total = 0;

        // যদি Type 2 এর drop কম হয়, তাহলে ওটাই আগে cook করো
        if (y < x) {
            swap(a, b);
            swap(x, y);
        }

        // Type 1 রান্না করো যতক্ষণ পারো
        while (k >= a) {
            k -= x;
            total++;
        }

        // তারপর Type 2 রান্না করো যতক্ষণ পারো
        while (k >= b) {
            k -= y;
            total++;
        }

        cout << total << endl;
    }

    return 0;
}
