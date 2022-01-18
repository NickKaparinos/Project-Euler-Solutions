/*
Project Euler Problem 10
Nick Kaparinos
2022
*/

#include <iostream>
#include <vector>

void primeCheck(std::vector<unsigned long int> *primes, unsigned long int number);

int main(int argc, char *argv[]) {
    unsigned long int n = 2000000; //2000000;
    std::vector<unsigned long int> primes{2};

    // Find primes below 2 million
    for (unsigned long int i = 3; i < n; i += 2) {
        primeCheck(&primes, i);
    }

    // Sum them up
    unsigned long int sum = 0;
    for (unsigned long int i : primes) {
        sum += i;
    }

    std::cout << "Sum = " << sum << std::endl;
    return 0;
}

void primeCheck(std::vector<unsigned long int> *primes, unsigned long int number) {
    // Check if number is prime and add it to the vector if it is
    bool found = false;
    for (unsigned long int i : *primes) {
        if (number % i == 0) {
            found = true;
            break;
        }
    }
    if (!found) {
        primes->push_back(number);
    }
    return;
}