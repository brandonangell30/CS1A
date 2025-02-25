//Input a sequence of numbers that prints the sum of odd numbers
//Brandon Angell
//09/05/2023

#include <iostream>

using std::cin; using std::cout;

int main() {
	cout << "Input sequence of integers (zero to stop): ";
	
	int sum, number, oddNumber;
	//must initialize sum as 0 for starting value
	sum = 0;
	//random val initialization because "0" would fail the loop
	number = 1;

	//if the number is not equal to 0 (the starting condition) enter the loop
	while (number != 0) {

		//user enters number
		cin >> number;

		//if number mod 2 = 0 then its even, else its odd.
		oddNumber = number % 2;

		//if its odd, add it to the sum
		if (oddNumber != 0) {
			sum += number;
		}
	}

	//print output
	cout << "The sum of odd numbers is: ";
	cout << sum;
}
