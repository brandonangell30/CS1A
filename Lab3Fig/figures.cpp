// to paint a character and print figures of user-supplied size
//Brandon Angell
//09/05/2023

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	//user inputs figure size
	cout << "Input figure size: ";
	int size;
	cin >> size;

	//user inputs the paint char
	cout << "Input paint character: ";
	char paintChar;
	cin >> paintChar;

	//controls the first filled rectangle
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << paintChar;
		}
		cout << endl;
	}
	cout << endl;

	//controls the hollow rectangle
	for (int i = 0; i < size; i++)
	{
		//if its the first or last line print all
		if (i == 0 || i == size - 1) {
			for (int j = 0; j < size; j++)
			{
				cout << paintChar;
			}
		}
		else {
			for (int j = 0; j < size; j++)
			{
				//print first and last collums
				if (j == 0 || j == size - 1) {
					cout << paintChar;
				}
				else
				{
					//to fill middle values with blanks
					cout << " ";
				}
			}
		}

		cout << endl;
	}
	cout << endl;

	//controls the line design 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			//if row equals column then print
			if (i == j) {
				cout << paintChar;
			}
			//otherwise print a blank
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	//backwards line design
	for (int i = size - 1; i >= 0; i--)
	{
		//must go opposite way otherwise we are printing the same line
		for (int j = 0; j < size; j++)
		{
			//if row equals column then print
			if (i == j) {
				cout << paintChar;
			}
			//otherwise print a blank
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	//final line square
	// Loop to print the box
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			// Print the char at the corners and along the diagonals
			if (i == 0 || i == size - 1 || j == 0) {
				cout << paintChar;
			}

			else if (j == size - 1 || i == j || i + j == size - 1) {
				cout << paintChar;
			}

			else {
				cout << " ";
			}
		}
		// Move to the next line after each row
		cout << endl;
	}
















	
}

