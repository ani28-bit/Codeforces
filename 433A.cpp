#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    int total = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        total += a[i];

        if(a[i] == 100)
            count1++;
        else
            count2++;
    }

    if(total % 200 != 0)
        cout << "NO";
    else if(count1 == 0 && count2 % 2 != 0)
        cout << "NO";
    else
        cout << "YES";
}