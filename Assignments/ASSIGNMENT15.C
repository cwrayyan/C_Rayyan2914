#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;

    printf("How many random numbers? ");
    scanf("%d", &n);

    // Seed (important for different results each run)
    srand(time(0));

    printf("Random numbers:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rand());   // generates random number
    }

    return 0;
}