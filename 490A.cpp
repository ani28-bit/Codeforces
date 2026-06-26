#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
         cin >> a[i];
    }

    int c1 = 0, c2 = 0, c3 = 0;

    for(int i = 0; i < n; i++){

          if(a[i] == 1){
               c1++;
          }
          else if(a[i] == 2){
               c2++;
          }
          else{
               c3++;
          }
    }

    int total = min(c1, min(c2, c3));

    cout << total << endl;

    int p1[c1], p2[c2], p3[c3];

    int i1 = 0, i2 = 0, i3 = 0;

    for(int i = 0; i < n; i++){

         if(a[i] == 1){
              p1[i1] = i + 1;
              i1++;
         }
         else if(a[i] == 2){
              p2[i2] = i + 1;
              i2++;
         }
         else{
              p3[i3] = i + 1;
              i3++;
         }
    }

    for(int i = 0; i < total; i++){

         cout << p1[i] << " "
              << p2[i] << " "
              << p3[i] << endl;
    }

    return 0;
}