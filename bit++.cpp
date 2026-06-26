#include<iostream>
using namespace std;

int main(){
    int n, x = 0;
    cin >> n;
    string op;

    while(n--){
        cin >> op;
        if(op == "++X" || op == "X++"){
            x++;
        }
        else if(op == "--X" || op == "X--"){
            x--;
        }
    }
    cout << x << endl; 
    return 0;
}
