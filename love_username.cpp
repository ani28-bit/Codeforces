#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int score;
    cin >> score;  // First score
    int max_score = score;
    int min_score = score;
    int amazing = 0;

    for (int i = 1; i < n; i++) {
        cin >> score;
        if (score > max_score) {
            amazing++;
            max_score = score;
        } else if (score < min_score) {
            amazing++;
            min_score = score;
        }
    }

    cout << amazing << endl;
    return 0;
}
