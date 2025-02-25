//Brandon Angell
//09/26/2023

#include<iostream>
#include <cstdlib>
#include <ctime>
#include "luckyfive.h"
using std::cin; using std::cout; using std::endl;

int main() {
    //declare array
	int chosen[size];
    //randomizer
	srand(time(nullptr));
    //call to assign and draw methods
    assign(chosen);
    draw(chosen);

    //input 5 numbers, if none of them match you lose
    //when one matches, break because you won the lottery.
        for (int i = 0; i < 5; ++i) {
            int userNum = entry();
            if (check(chosen, userNum)) {
                cout << "Congratulations! You've matched a lottery number!" << endl;
                break;
            }
            if (i == 4) {
                cout << "Sorry, you didn't match any lottery numbers." << endl;
            }
        }

        //print lottery results
        printOut(chosen);

        return 0;
    }











