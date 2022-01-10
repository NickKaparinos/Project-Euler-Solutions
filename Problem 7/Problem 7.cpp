/*
Project Euler Problem 7
Nick Kaparinos
2022
*/
#include <iostream>
#include <vector>

//bool primeCheck(unsigned long long number);
//
//int main() {
//	unsigned int counter = 1;
//	unsigned int i = 3;
//	while (counter <= 10000) {
//		if (primeCheck(i)) {
//			counter++;
//		}
//		i += 2;
//	}
//	i -= 2;
//	std::cout << "10001th prime = " << i << std::endl;
//}
//
//
//bool primeCheck(unsigned long long number) {
//	// Check if the number is prime
//	bool foundFactor = false;
//	for (unsigned long long i = 3; i <= sqrt(number); i += 2) {
//		if (number % i == 0) {
//			foundFactor = true;
//			break;
//		}
//	}
//	return !foundFactor;

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