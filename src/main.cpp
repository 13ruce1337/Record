#include "character.h"
#include <iostream>

int main() {
    Character test;

    test.name = "Test Working";
    test.str = 18;

    cout << test.name << "\n";
    cout << test.str << "\n";

    return 0;
}