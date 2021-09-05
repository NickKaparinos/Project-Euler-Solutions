/*
Project Euler Problem 6
Nick Kaparinos
2021
*/

#include <iostream>
#include <math.h>

using namespace std;

long calculateSumOfSquares(int N) {
    long result = 0;
    for (int i = 1; i <= N; i++) {
        result += pow(i, 2);
        }
    return result;
}

long calculatesquareOfSum(int N) {
    long result = 0;
    for (int i = 1; i <= N; i++) {
        result += i;
    }

    return pow(result,2);

}

int main(int argc, char* argv[]) {
    int N = 100;

    // Calculate sum of squares
    long sumOfSquares = calculateSumOfSquares(N);

    // Calculate square of sums
    long squareOfSum = calculatesquareOfSum(N);

    cout << "Result: " << squareOfSum - sumOfSquares << endl;
}
