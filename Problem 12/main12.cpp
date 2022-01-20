/*
Project Euler Problem 12
Nick Kaparinos
2022
*/

#include <math.h>
#include <iostream>
#include <vector>

unsigned long int calc_num_devisors(unsigned long int number);

int main(int argc, char *argv[]) {
    unsigned long int natural_number = 1;
    unsigned long int i = 2;

    while (true) {
        natural_number += i;
        if (natural_number % 100000 == 0){
            std::cout << natural_number << "\n";
        }
        unsigned long int num_devisors = calc_num_devisors(natural_number);
        if (num_devisors>=500){
            break;
        }
        i++;
    }

    std::cout << "Result: " << natural_number << std::endl;
    return 0;
}


unsigned long int calc_num_devisors(unsigned long int number){
    unsigned long int num_devisors = 0;
    for (unsigned long int i=1; i<sqrt(number); i++){
        if (number % i ==0){
            num_devisors+=1;
        }
    }
    return num_devisors*2;
}