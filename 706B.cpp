/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int q;
    cin>>q;

    while(q--){
        int m,count =0;
        cin>> m;

        for(int i=0;i<n;i++){
               if( m >= a[i]){
                   count ++;
               }
        }
        cout<<count<<endl;
    }
}  eta thik ase.but tle dey*/


#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while(q--) {

        int m;
        cin >> m;

        int ans = upper_bound(a.begin(), a.end(), m) - a.begin();

        cout << ans << endl;
    }

    return 0;
}