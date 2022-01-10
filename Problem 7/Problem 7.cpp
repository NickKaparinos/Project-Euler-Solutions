/*
Project Euler Problem 7
Nick Kaparinos
2022
*/
#include <iostream>
#include <vector>

void primeCheck(std::vector<unsigned int>* primes, unsigned int number);

int main(int argc, char* argv[]) {
	int n = 10001;
	std::vector<unsigned int> primes{ 2 };
	unsigned int i = 3;

	while (primes.size() < n) {
		primeCheck(&primes, i);
		i += 2;
	}

	std::cout << n << "th prime = " << primes.back() << std::endl;
	return 0;
}

void primeCheck(std::vector<unsigned int> * primes, unsigned int number) {
	// Check if number is prime and adds it to the vector if it is
	bool found = false;
	for (int i : *primes) {
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