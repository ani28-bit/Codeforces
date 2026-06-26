#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
          int d = s[i] - '0';
          int nd = 9 - d;

        
        if (nd < d) {
            
            if (i == 0 && nd == 0)
               continue;
            s[i] = nd + '0';
        }
    }

        cout << s << endl;
}