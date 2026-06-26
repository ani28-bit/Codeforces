#include<bits/stdc++.h>
using namespace std;


int main(){
     int m,n;
     cin>>n>>m;

     vector<int>f(m);

     for(int i=0;i<m;i++){
           cin>>f[i];
     }

     sort(f.begin(),f.end());
     int min = f[n-1]-f[0];

     for (int i = 0; i <= m - n; i++) {
            int current_diff = f[i + n - 1] - f[i];
        
        if (current_diff < min) {
            min = current_diff;
        }
    }

    
    cout << min<< endl;

    return 0;
}