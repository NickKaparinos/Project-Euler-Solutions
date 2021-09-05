/*
Project Euler Problem 3
Nick Kaparinos
2021
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

bool primeCheck(unsigned long long number) {
	// Check if the number is prime
	bool foundFactor = false;
	for (unsigned long long i = 3; i <= sqrt(number); i += 2) {
		if (number % i == 0) {
			foundFactor = true;
			break;
		}
	}
	return !foundFactor;
}

unsigned long long findLargestFactor(unsigned long long number) {
	// Find odd factors of the number
	vector<unsigned long long> oddFactors;
	for (unsigned long long i = 3; i <= sqrt(number); i += 2) {
		if (number % i == 0) {
			oddFactors.push_back(i);
		}
	}

	// Check if they are prime
	unsigned long long result = -1;
	for (vector< unsigned long long >::reverse_iterator it = oddFactors.rbegin(); it != oddFactors.rend(); ++it) {
		if (primeCheck(*it)) {
			result = *it;
			break;
		}
	}

	return result;
}

int main(int argc, char* argv[]) {
	cout << "Result: " << findLargestFactor(600851475143) << endl;
}