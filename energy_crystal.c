#include<stdio.h>

int minSteps(int x) {
    int a = 0, b = 0, c = 0;
    int steps = 0;
    while (a < x || b < x || c < x) {
    
        if (a <= b && a <= c)
            a = x < a * 2 ? x : a * 2 == 0 ? 1 : a * 2;
        else if (b <= a && b <= c)
            b = x < b * 2 ? x : b * 2 == 0 ? 1 : b * 2;
        else
            c = x < c * 2 ? x : c * 2 == 0 ? 1 : c * 2;
        steps++;
    }
    return steps;
}

int main() {
    int t, x;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &x);
        printf("%d\n", minSteps(x));
    }
    return 0;
}
