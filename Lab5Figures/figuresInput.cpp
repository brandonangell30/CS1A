//To repeatedly ask the user to select the figure size, paint character and the figure
//Brandon Angell
//09/19/2023

#include<iostream>

#include "figures.h"
using std::cin; using std::cout; using std::endl;

int main() {
	//declare variables
	int s;
	char pC;
    int option; 
    do {
        //user inputs figure size
        cout << "Input figure size: ";
        cin >> s;

        //user inputs the paint char
        cout << "Input paint character: ";
        cin >> pC;

        //user gets to choose option
        cout << "1. square" << endl;
        cout << "2. slash" << endl;
        cout << "3. crossed square" << endl;

        cout << "select the figure: ";
        cin >> option;
        cout << endl;

        //filled square option
        if (option == 1) {
            cout << "filled, hollow? [f/h]: ";
            char fill;
            cin >> fill;
            cout << endl;

            //accounts for upper and lowercase
            if (fill == 'f' || fill == 'F') {
                filledSquare(s, pC);
            }

            if (fill == 'h' || fill == 'H') {
                hollowSquare(s, pC);
            }
        }

        //slash method
        if (option == 2) {
            cout << "slash or backslash? [f/b]: ";
            char tempSlash;
            cin >> tempSlash;
            cout << endl;

            if (tempSlash == 'f' || tempSlash == 'F') {
                slash(s, pC);
            }

            if (tempSlash == 'b' || tempSlash == 'B') {
                backslash(s, pC);
            }
        }

        //only option for 3 is just the crossed sqaure
        if (option == 3) {
            crossedSquare(s, pC);
        }
        //if they dont choose an option 1-3 then exit program
    } while (option >= 1 && option <= 3);







}