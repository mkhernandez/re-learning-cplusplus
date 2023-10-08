#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << 12 << std::endl;
    int age {21};
    std::cout << "Are you " << age << std::endl;
    // Error
    std::cerr << "std::cerr output: Something went wrong!" << std::endl;
    // Log message
    std::clog << "std::clog output: This is a log message!" << std::endl; 
    std::string name;

    // Can do the following on two separate lines with cout but not necessary
    /*std::cout << "Please type in your last name and age with a space between them: ";
    std::cin >> name >> age;
    std::cout << "Hello " << name << "!" << " You are " << age << " years old." << std::endl; */

    // Can also get input this way. Sometimes user may put a space between words
    std::string fullName;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, fullName);
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "Hey, " << fullName << "! " << "You are " << age << " years old!" << std::endl;

    return 0;
}