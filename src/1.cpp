// Determines the user's age group.

#include <iostream>

int main() {
    int age;
    int agegroup;
    std::string groupname;

    std::cout << "Please input your age: ";
    std::cin >> age;

    if (age <= 0) {
        agegroup = -1; //weird input
        groupname = "not yet born";
    }
    else if (age <= 12) {
        agegroup = 0; //child
        groupname = "child";
    }
    else if (age <= 19) {
        agegroup = 1; //teenager
        groupname = "teenage";
    }
    else if (age <= 64) {
        agegroup = 2; //adult
        groupname = "adult";
    }
    else {
        agegroup = 3; //senior
        groupname = "senior";
    }

    std::cout << "That age belongs to the " << groupname << " demographic.\n";
    return 0;
}