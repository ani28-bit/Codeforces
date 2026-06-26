#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max(a, max(b, c));

        int resA = (a == mx ? 0 : mx - a + 1);
        int resB = (b == mx ? 0 : mx - b + 1);
        int resC = (c == mx ? 0 : mx - c + 1);

        cout << resA << " " << resB << " " << resC << endl;
    }
}
