#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char a[10][10];
        int score = 0;

      
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> a[i][j];
            }
        }

        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i][j] == 'X') {
                    int layer = min( min(i, j), min(9 - i, 9 - j) );
                    score += layer + 1;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}
