#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[55] = {0};
        int freq[55] = {0}; 

        for(int i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }


        int mex = 0;
        while(freq[mex] > 0) mex++;

        int score = 0;
        if(mex > 0) {
            score += mex;
        
            for(int i=0; i<mex; i++) {
                freq[i]--;
            }
        }

        
        int sum= 0;
        for(int i=0; i<=50; i++) {
            if(freq[i] > 0)
                sum += freq[i]*i;
        }

        score += sum;

        cout << score << "\n";
    }
    return 0;
}
