#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;

        
        int a3 = a1 + a2;
        int count = 0;
        if(a3 == a1 + a2)
             count++;
        if(a4 == a2 + a3) 
             count++;
        if(a5 == a3 + a4)
               count++;
        if(count > ans)
              ans = count;

        
        a3 = a4 - a2;
        count = 0;
        if(a3 == a1 + a2) count++;
        if(a4 == a2 + a3) count++;
        if(a5 == a3 + a4) count++;
        if(count > ans) ans = count;

      
        a3 = a5 - a4;
        count = 0;
        if(a3 == a1 + a2) count++;
        if(a4 == a2 + a3) count++;
        if(a5 == a3 + a4) count++;
        if(count > ans) ans = count;

          cout << ans << endl;
    }

    return 0;
}