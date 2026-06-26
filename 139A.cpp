#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[7];
    int total = 0;

    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        total += a[i];
    }

  
    while (n > total) {
            n -= total;
    }

    if (n == 0)
        n = total;

    for (int i = 0; i < 7; i++) {
           n -= a[i];

        if (n <= 0) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}