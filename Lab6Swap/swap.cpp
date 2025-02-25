//To have the user input 3 numbers and sort them in increasing order
//9/26/2023
//Brandon Angell

#include <iostream>

using std::cout; using std::endl; using std::cin;

void getNumbers(int&, int&, int&); // reads three integers from the keyboard.
void swap(int&, int&); // interchanges first and second parameter.
void showResults(int, int, int); // outputs parameters


int main() {
    int firstNum, secondNum, thirdNum;

    getNumbers(firstNum, secondNum, thirdNum);
    swap(firstNum, secondNum);
    swap(firstNum, thirdNum);
    swap(secondNum, thirdNum);
    showResults(firstNum, secondNum, thirdNum);
}

// reads two integers from user
void getNumbers(int& in1, int& in2, int& in3) {
    cout << "Enter three integers: ";
    cin >> in1 >> in2 >> in3;
}

// interchanges left and right
void swap(int& left, int& right) {
    if (left > right) {
        const int tmp = left;
        left = right;
        right = tmp;
    }
    
}

// outputs parameters
void showResults(int out1, int out2, int out3) {
    cout << "In increasing order, the numbers are: "
        << out1 << " " << out2 << " " << out3 << endl;
}