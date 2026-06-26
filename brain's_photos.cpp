#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    bool isColor = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            
            if (a[i][j] != 'W' && a[i][j] != 'B' && a[i][j] != 'G') {
                isColor = true;
            }
        }
    }

    if (isColor) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}
