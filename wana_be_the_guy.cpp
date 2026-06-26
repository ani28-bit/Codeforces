#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int level[101]; 
    for (int i = 1; i <= n; i++) {
        level[i] = 0; 
    }

    int p, x;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> x;
        level[x] = 1;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        level[x] = 1; 
    }

    
    for (int i = 1; i <= n; i++) {
        if (level[i] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0; 
        }
    }

    
    cout << "I become the guy." << endl;
    return 0;
}
