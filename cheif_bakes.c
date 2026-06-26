#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int cakes_per_vehicle = Y / X;
    int vehicles_needed = N / cakes_per_vehicle;
    if (N % cakes_per_vehicle != 0) {
        vehicles_needed += 1;
    }

    printf("%d\n", vehicles_needed);
    return 0;
}
