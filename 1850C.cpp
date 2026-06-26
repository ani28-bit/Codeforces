#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char grid[8][8];

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> grid[i][j];
            }
        }

        int col = -1;

        // correct way: check full grid
        for(int j = 0; j < 8; j++){
            for(int i = 0; i < 8; i++){
                if(grid[i][j] != '.'){
                    col = j;
                    break;
                }
            }
            if(col != -1) break;
        }

        string ans = "";

        for(int i = 0; i < 8; i++){
            if(grid[i][col] != '.'){
                ans += grid[i][col];
            }
        }

        cout << ans << endl;
    }
}