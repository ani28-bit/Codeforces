#include <iostream>
using namespace std;


bool isLucky(int x) {
    if (x == 0){
         return false;
    }
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7){
               return false;
         }
               x /= 10;
      }
              return true;
 }

 int main() {
    int n;
    cin >> n;

    bool found = false;

   
    for (int i = 1; i <= n; i++) {
        if (isLucky(i)) {
            if (n % i == 0) {
                 found = true;
                 break;
            }
        }
    }

    if (found){

           cout << "YES" << endl;
    }
    else{
           cout << "NO" << endl;
     }

          return 0;
  }