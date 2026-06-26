#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, l;
    cin >> n >> l;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double ans = 0;

    
    for(int i = 1; i < n; i++) {

          ans = max(ans, (a[i] - a[i-1]) / 2.0);
    }

   
    ans = max(ans, (double)a[0]);

    ans = max(ans, (double)(l - a[n-1]));

    cout << fixed << setprecision(10) << ans;
}