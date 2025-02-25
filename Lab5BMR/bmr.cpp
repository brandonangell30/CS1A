//For users to input their health statistics to find out how many cookies they can eat without gaining weight
//Brandon Angell
//09/19/2023


#include <iostream>;
using std::cout; using std::cin; using std::endl;

//prototypes
double bmrWomen(int w, int h, int a);
double bmrMen(int w, int h, int a);

int main() {
	//variables
	const int cookieCals = 142;
	int weight;
	int age;
	int feet;
	int inches; 
	int height; 
	char gender;
	int numCookies;
	double bmr;

	//gender
	cout << "Are you Male or Female (M/F): ";
	cin >> gender;
	cout << endl;

	//weight
	cout << "Please input your weight in pounds: ";
		cin >> weight;
		cout << endl;

	//height in feet
	cout << "Please input your height in feet: ";
		cin >> feet;
		cout << endl;

		//height in inches
	cout << "Please input your height in inches: ";
	cin >> inches;
		cout << endl;

		//age in years
		cout << "Please input your age in years: ";
		cin >> age;
		cout << endl;

		//calculating total height by converting feet to inches
	height = (feet * 12) + inches;

	//upper and lowercase protection
		if (gender == 'F'|| gender == 'f'){
			bmr = bmrWomen(weight, height, age);
		}
		if (gender == 'M' || gender == 'm') {
			bmr = bmrMen(weight, height, age);
		}

		//equation to calculate number of cookies
		numCookies = (bmr / cookieCals);

		cout << "You can eat " << numCookies << " cookies without gaining weight.";




}

double bmrWomen(int w, int h, int a)
{
	return 655 + (4.3 * w) + (4.7 * h) - (4.7 * a);
}

double bmrMen(int w, int h, int a)
{
	return 66 + (6.3 * w) + (12.9 * h) - (6.8 * a);
}