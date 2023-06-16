#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int n = rand(); // Assign a random number to variable n

    std::cout << "The number " << n;

    if (n > 0) {
        std::cout << " is positive" << std::endl;
    } else if (n == 0) {
        std::cout << " is zero" << std::endl;
    } else {
        std::cout << " is negative" << std::endl;
    }

    return 0;
}
