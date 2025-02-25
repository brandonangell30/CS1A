//To create a lottery, where the user inputs numbers and checks them against an array to see if they won
//09/26/2023
//Brandon Angell

#include "luckyfive.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin; using std::cout; using std::endl;

//assign method
void assign(int chosen[]) {
	for (int i = 0; i < size; ++i) {
		chosen[i] = -1;
	}
}
//check if number matches
bool check(int chosen[], int number) {
	for (int i = 0; i < size; ++i)
	{
		if (chosen[i] == number) {
			return true;
		}
	}
	return false;

}

//draws number between 0 and 99 randomly
void draw(int chosen[]) {
	int selectedNumbers = 0;
	while (selectedNumbers < size) {
		int randomNumber = rand() % 100;
		if (!check(chosen, randomNumber)) {
			chosen[selectedNumbers] = randomNumber;
			selectedNumbers++;
		}
	}
}

//user enters numbers
int entry() {
	int num;
	do {
		cout << "Enter a number between 0 and 99: ";
		cin >> num;

	} while (num < 0 || num > 99);
	return num;
}

//printing method
void printOut(int chosen[]) {
	cout << "Selected Lottery Numbers: ";
		for (int i = 0; i < size; ++i) {
		cout << chosen[i] << " ";
	}
	cout << std::endl;
}