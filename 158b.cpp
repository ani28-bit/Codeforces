#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[5] = {0};

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    int taxi = 0;

    
    taxi += a[4];

    
    taxi += a[3];
    a[1] -= min(a[1], a[3]);

   
    taxi += a[2] / 2;

    if(a[2] % 2) {
        taxi++;
        a[1] -= min(a[1], 2);
    }

   
    if(a[1] > 0){
         taxi += (a[1] + 3) / 4;
    }

    cout << taxi;
}