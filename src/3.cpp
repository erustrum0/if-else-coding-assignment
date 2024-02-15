// Print day of the week from a number.

#include <iostream>

int main() {
    int number;

    std::cout << "Input the number of a day of the week (1-7): ";
    std::cin >> number;

    // This variable will change if the day of the week is found.
    std::string dayname = "";

    // Switch because if-else if-else chains suck (subjective opinion).
    switch(number) {
        case 1:
            dayname = "Monday";
            break;
        case 2:
            dayname = "Tuesday";
            break;
        case 3:
            dayname = "Wednesday";
            break;
        case 4:
            dayname = "Thursday";
            break;
        case 5:
            dayname = "Friday";
            break;
        case 6:
            dayname = "Sunday";
            break;
        case 7:
            dayname = "Saturday";
            break;
        default:
            dayname = "";
            break;
    }

    if (dayname == "") {
        std::cout << "Couldn't find that day of the week!" << std::endl;
        return -1;
    }

    std::cout << "That day is " << dayname << "." << std::endl;
    return 0;
}