/*
Project Euler Problem 15
Nick Kaparinos
2022
*/

#include <iostream>

unsigned long long num_paths(const unsigned long long n);

int main(int argc, char *argv[]) {
    unsigned long long int n = 20;

    std::cout << "Number of paths: " << num_paths(n) << std::endl;

    return 0;

}

unsigned long long num_paths(const unsigned long long n){
    unsigned long long result = 1;
    for (unsigned int i=1;i<=n;i++){
        result = result * (n+i)/(i);
    }


    return result;
}