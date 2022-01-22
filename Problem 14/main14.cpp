/*
Project Euler Problem 14
Nick Kaparinos
2022
*/

#include <iostream>
#include <map>

unsigned int collatzSequenceLength(unsigned int n, std::map<unsigned int, unsigned int> &sequenceLengths);

int main(int argc, char *argv[]) {
    std::map<unsigned int, unsigned int> sequenceLengths;
    sequenceLengths[1] = 1;

    unsigned int max_length = 1;
    unsigned int max_index = 1;
    unsigned int limit = 1000000;
    for (unsigned int i = 1; i <= limit; i++) {
        unsigned int length = collatzSequenceLength(i, sequenceLengths);
        if (length > max_length) {
            max_length = length;
            max_index = i;
        }
    }

    std::cout << "Max length:" << max_length << " for index: " << max_index << std::endl;
    return 0;
}

unsigned int collatzSequenceLength(unsigned int n, std::map<unsigned int, unsigned int> &sequenceLengths) {
    // Calculate and return the Collatz Sequence length for the number n
    if (n % 2 == 0) {
        n = n / 2;
    } else {
        n = 3 * n + 1;
    }

    // if key exists in the map, return the corresponding value
    if (sequenceLengths.count(n) == 0) {
        sequenceLengths[n] = collatzSequenceLength(n, sequenceLengths);
    }
    return sequenceLengths[n] + 1;
}