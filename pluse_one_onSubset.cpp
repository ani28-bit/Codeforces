#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int a[n];

        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int step = 0;

        while (true) {
            
            bool all_equal = true;
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    all_equal = false;
                    break;
                }
            }

            if (all_equal) {
              break;

            }
            int max = a[0];
            for(int i = 0; i < n-1; i++) {
                if(a[i] > max) {
                    max = a[i];
                }
            }

            
            for(int i = 0; i < n; i++) {
                if(a[i] < max) {
                    a[i]++;
                }
            }

            step++;
        }
    

        cout << step << endl;
    }

return 0;

}
