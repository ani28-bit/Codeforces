#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        int a[n], count = 0;

        for(int i = 0; i < n; i++){

            cin >> a[i];

            if(a[i] == 2){
                count++;
            }
        }

        if(count % 2 != 0){
            cout << -1 << endl;
        }

        else if(count == 0){
            cout << 1 << endl;
        }

        else{

            int half = count / 2;
            int idx = 0;

            for(int i = 0; i < n; i++){

                if(a[i] == 2){
                    idx++;
                }

                if(idx == half){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
}