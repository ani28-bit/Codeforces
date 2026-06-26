#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
               long long x;
               cin >> x;
               sum += x;
        }

        if (sum % 2 == 1 || (n * k) % 2 == 0){
                 cout << "YES"<<endl;
        }
        
        else{
                  cout << "NO"<<endl;
          }
      }

  
    }