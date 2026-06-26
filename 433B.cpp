/*#include<bits/stdc++.h>
using namespace std;

int  main(){
      int n;
      cin>>n;

      long long a[n];

      for(int i=0;i<n;i++){
            cin>>a[i];
      }

      int m;
      cin>>m;
     

      while(m--){
          int type,l,r;
          cin>>type>>l>>r;
           long long sum=0;

          if(type == 1){
               for(int i=l-1; i<=r-1; i++){
                  sum += a[i];
               }
          }
          else{

            vector<long long> temp(a,a+n);
                sort(temp.begin(),temp.end());

                for(int i=l-1; i<=r-1; i++){
                      sum += temp[i];
               }
          }

          cout<<sum<<endl;
      }
} eta TLE dey*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // original prefix sum
    vector<long long> pre(n+1,0);

    for(int i = 0; i < n; i++){
        pre[i+1] = pre[i] + a[i];
    }

    // sorted array
    vector<long long> b = a;
    sort(b.begin(), b.end());

    // sorted prefix sum
    vector<long long> pre2(n+1,0);

    for(int i = 0; i < n; i++){
        pre2[i+1] = pre2[i] + b[i];
    }

    int m;
    cin >> m;

    while(m--){

        int type,l,r;
        cin >> type >> l >> r;

        if(type == 1){
            cout << pre[r] - pre[l-1] << endl;
        }
        else{
            cout << pre2[r] - pre2[l-1] << endl;
        }
    }
}