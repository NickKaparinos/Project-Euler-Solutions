/*
Project Euler Problem 5
Nick Kaparinos
2021
*/
#include <iostream>
#include <string> 

using namespace std;


int main(int argc, char* argv[]) {
	bool found = false;
	int i = 21;

	for (; ; i++) {
		for (int j = 2; j <= 20; j++) {
			if (i % j != 0) {
				break;
			}else{
				if (j == 20) {
					found = true;
				}
			}
		}
		if (found){
			break;
		}
	}

	cout << "Result : " << i << endl;
}

