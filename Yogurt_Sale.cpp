#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        int pairCount = n / 2;
        int singleCount = n % 2;
        int priceForPair;

        
        if (2 * a > b) {
            priceForPair = b;
        } else {
            priceForPair = 2 * a;
        }

        int cost = (pairCount * priceForPair) + (singleCount * a);
        cout << cost << endl;
    }

    return 0;
}
