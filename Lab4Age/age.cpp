//To implement a guessing game where the user infers the dragons changing age
//Brandon Angell
//9/12/2023

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std:: endl;

int main() {

	//randomizer
	srand(time(nullptr));
	//sets limit of the age from 1-100
	int dragonAge = (rand() % 100) + 1;
	int year = 1000;
	//user prediction variable
	int userGuess;

	//dowhile because if they guess the dragons age, no need to re run the loop
	do {

		
		cout << "Year " << year;
		cout << ": Hello, fair maiden. I am a fearsome dragon. How old am I?";
		cin >> userGuess; 
		cout << endl;
		
		//if dragon age is correct, then stop.
		if (userGuess == dragonAge)
		{
			
			cout << "You got it! Here is the hansome prince. Live happily ever after!" << endl;
		}
		//if the user guess younger the the dragon age, let the user know, and add 5 years on to the year and age
		else if (userGuess > dragonAge)
		{
			
			cout << "Wrong I am younger. No hansome prince for you. See you in five years." << endl;
			year += 5;
			dragonAge += 5;
			//reset guess variable since the code will reloop and fail to reguess age
			userGuess = 0;
		}
		else
		{
			//if the user guess older the the dragon age, let the user know, and add 5 years on to the year and age
			cout << "Wrong I am older. No hansome prince for you. See you in five years." << endl;
			year += 5;
			dragonAge += 5;
			userGuess = 0;
		}


	}
	//if userinput is not the dragon age, run again.
	while (userGuess != dragonAge);
	








}