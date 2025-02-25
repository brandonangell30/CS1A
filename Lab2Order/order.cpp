// the program attempts to sort three integers
// in increasing order, it is incomplete
// Brandon Angell
// 8/29/2023

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    cout << "Which order do you want to sort? (1--> Increasing AND 2 is Decreasing <--2)";
    int order; 
    cin >> order;

    // orders x & y
    if ((order == 1 && x > y) || (order == 2 && x < y)) 
    {
        const int tmp = x;
        x = y;
        y = tmp;
    }

    // orders y and z
    if ((order == 1 && y > z) || (order == 2 && y < z)){
        const int tmp = y;
        y = z;
        z = tmp;
    }

    //orders x & y again
    if ((order == 1 && x > y) || (order == 2 && x < y))
    {
        const int tmp = x;
        x = y;
        y = tmp;
    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}