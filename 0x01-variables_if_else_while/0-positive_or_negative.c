#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Generate a random number and assign it to n
    srand(time(NULL));
    n = rand();

    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }
    
    return 0;
}
