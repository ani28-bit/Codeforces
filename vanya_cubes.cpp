#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0; 
    int used = 0;  
    int i = 1;  

    while (true) {
        int cubes_needed = i * (i + 1) / 2;

        if (used + cubes_needed > n)
               break;

        used += cubes_needed;
        height++;
        i++;
    }

    cout << height << endl;
    return 0;
}
