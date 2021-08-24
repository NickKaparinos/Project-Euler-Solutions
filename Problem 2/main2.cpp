/*
Project Euler Problem 2
Nick Kaparinos
2021
*/
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int previousTerms[2] = { 1,2 };
    int evenSum = 2;
    int totalSum = 3;
    const int limit = 4000000;
    int fibonacciNumber = 3;

    while (fibonacciNumber < limit) {
        // Calculate new fibonacci number 
        fibonacciNumber = previousTerms[0] + previousTerms[1];
        
        // If even add to sum
        if (fibonacciNumber % 2 == 0) {
            evenSum += fibonacciNumber;
        }

        // Update previous fibonacci terms
        previousTerms[0] = previousTerms[1];
        previousTerms[1] = fibonacciNumber;
    }

    // Result and execution time
    cout << "Result = " << evenSum << " !" << endl;
}
