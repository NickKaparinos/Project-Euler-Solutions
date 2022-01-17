/*
Project Euler Problem 9
Nick Kaparinos
2022
*/

#include <iostream>
#include <math.h>
#include <string>

int main(int argc, char *argv[]) {
    bool found = false;
    int b, c;
    float a;

    for (c = 5; c < 1000; c++) {
        for (b = 1; b < c; b++) {
            a = sqrt(pow((float)c, 2) - pow((float)b, 2));
            if (roundf(a) == a) {
                if (a + b + c == 1000) {
                    found = true;
                    break;
                }
            }
        }
        if (found) {
            break;
        }
    }

    std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
    std::cout << "a*b*c = " << a * b * c << "\n";
    return 0;
}