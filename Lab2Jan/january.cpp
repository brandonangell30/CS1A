/*this program inputs two digit natural number
*and outputs this number spelled in english
*/
//Brandon Angell
//8/29/2023
#include <iostream>

using std::cin; using std::cout;

int main() {
	//inputs value from user
	cout << "Input a number between 1 and 31: ";
	int number;
	cin >> number;

	//splits tens and ones
	int tens = number / 10;
	int ones = number % 10;

	if (tens == 1) {
		switch (ones) {
		case 0: cout << "ten";
			break;
		case 1: cout << "eleven"; 
			break; 
		case 2: cout << "twelve"; 
			break;
		case 3: cout << "thirteen";
			break;
		case 4: cout << "fourteen";
			break;
		case 5: cout << "fifteen";
			break;
		case 6: cout << "sixteen"; 
			break;
		case 7: cout << "seventeen";
			break;
		case 8: cout << "eighteen";
			break;
		case 9: cout << "nineteen";
			break;
		}
	}
	else {
		switch (tens) {
		case 2: cout << "twenty";
			break; 
		case 3: cout << "thirty";
			break;
		}
		if (tens && ones) {
			cout << "-";
		}

		switch (ones) {
		case 1: cout << "one";
			break;
		case 2: cout << "two";
			break;
		case 3: cout << "three";
			break;
		case 4: cout << "four";
			break;
		case 5: cout << "five";
			break;
		case 6: cout << "six";
			break;
		case 7: cout << "seven";
			break;
		case 8: cout << "eight";
			break;
		case 9: cout << "nine";
			break;
	}
	}
}