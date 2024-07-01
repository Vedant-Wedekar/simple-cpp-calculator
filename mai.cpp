//simple cpp calculator

#include <iostream>
#include<cmath>
using namespace std;

int main() {

	//define variable
	string operation;
	double number1, number2;

	//get user input
	std::cout << "Enter a first Number: ";
	std::cin >> number1;

	std::cout << "Enter Operation(+,-,*,/): ";
	std::cin >> operation;

	std::cout << "Enter Second Number: ";
	std::cin >> number2;

	//if else statement checking entered Operation

	if(operation == "+") {

		std::cout<<number1 + number2;
	}
	else if (operation == "-") {
		std::cout << number1 - number2;
	}


	else if (operation == "*") {
		std::cout << number1 * number2;
	}

	else if (operation == "/") {
		std::cout << number1 / number2;
	}
	else {

		std::cout << "Number not recognized ";

	}
	return 0;
}
