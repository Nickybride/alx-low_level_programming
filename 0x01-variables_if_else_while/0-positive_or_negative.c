#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 

{

int n;
    
srand(time(0));
n = rand() % RAND_MAX;

if (n > 0)
{
    printf("%d is Positive\n", n);
}
    
else if (n == 0) 
{
     printf("%d is Zero\n", n);
}
 else {
      printf("%d is Negative\n", n);
}
return (0);
}
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 random_number.c -o random_number
./random_number
