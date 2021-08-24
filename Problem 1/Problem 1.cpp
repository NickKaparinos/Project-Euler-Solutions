/*
Project Euler problem 1
*/

#include <iostream>

using namespace std;
int main() {
	const int N = 1000;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	cout << "Result = " << sum << " !" << endl;
}