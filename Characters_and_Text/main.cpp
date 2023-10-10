#include <iostream>

int main() {
    char value1 = 73;
    char value2 = 108;
    char value3 = 111;
    char value4 = 118;
    char value5 = 101;
    char value6 = 76;
    char value7 = 73;
    char value8 = 83;
    char value9 = 65;
    char value10 = 33;
    char space = 32;
    char value11 {'A'};
    char value12 {'R'};
    char value13 {'R'};
    char value14 {'O'};
    char value15 {'W'};

    // Cast char value to integers
    // std::cout << static_cast<int>(value1) << static_cast<int>(space) << static_cast<int>(value2) << static_cast<int>(value3) <<static_cast<int>(value4)
    // << static_cast<int>(value5) << static_cast<int>(space) << static_cast<int>(value6) << static_cast<int>(value7)
    // << static_cast<int>(value8) << static_cast<int>(value9) << static_cast<int>(value10) << std::endl;

    // Print out char as characters even though they are ascii values
    std::cout << value1 << space << value2 << value3 << value4 << value5 << space << value6 << value7 << value8
    << value9 << value10 << std::endl;

    // Print out ARROW
    // std::cout << value11 << value12 << value13 << value14 << value15 << std::endl;
    // OR
    std::cout << value11 << std::endl;
    std::cout << value12 << std::endl;
    std::cout << value13 << std::endl;
    std::cout << value14 << std::endl;
    std::cout << value15 << std::endl;

    return 0;
}