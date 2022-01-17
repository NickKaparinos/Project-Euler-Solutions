/*
Project Euler Problem 4
Nick Kaparinos
2021
*/

#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(int number) {
    string str = to_string(number);

    int num_iterations = str.size() / 2;
    for (int i = 0; i <= num_iterations; i++) {
        if (str[i] != str[str.size() - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]) {
    int result = -1;

    for (int i = 999; i > 1; i--) {
        for (int j = 999; j > 1; j--) {
            int product = i * j;
            if (is_palindrome(product)) {
                if (product > result) {
                    result = product;
                }
            }

            if (product <= result) {
                break;
            }
        }
    }

    cout << result << endl;
}