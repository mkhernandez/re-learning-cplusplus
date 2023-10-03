#include <iostream>
#include <format>

using namespace std;

int main() {
    string name = "Mark Hernandez";
    int age = 51;
    string formattedStr = format("My name is {} and I am {} years old", name, age);
    for(int i = 0; i < 10; i++) {
        std::cout << formattedStr << endl;
    }
    return 0;
    }