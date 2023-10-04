// This is the input/output stream library
#include <iostream>
#include <format> // This is the format library to help format string output

using namespace std;
// This is a one line comment

/* This is a multiple line comment
   It is used to comment out blocks
   of comments or blocks of code 
   when you are testing */

// A function
int addNumbers(int firstNum, int secondNum) {
    int sum = firstNum + secondNum;
    return sum;
}

int main() {
    int first = 35;
    int second = 576;
    int sum = 0;
    // String declaration and initialization. Can also use std::string name 
    string name = "Mark Hernandez";
    int age{51}; // Can also use classical c++: int age = 51;
    string formattedStr = format("My name is {} and I am {} years old", name, age);
    // This is a for loop
    /*for(int i = 0; i < 10; i++) {
        std::cout << formattedStr << endl;
    } */
    sum = addNumbers(first, second);
    cout << "The sum of the values is: " << sum << endl;
    cout << "The sum of the values is now: " << addNumbers(36, 69);
    return 0;
    }