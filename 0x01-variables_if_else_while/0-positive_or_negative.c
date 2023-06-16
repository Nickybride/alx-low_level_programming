#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = rand() % RAND_MAX;

    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }

    printf("\n");

    return 0;
}
