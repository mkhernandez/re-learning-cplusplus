#include <iostream>

int main() {
    int elephant_count;
    // Variable braced initialization
    int lion_count {}; // Initialized to zero
    int dog_count {10}; // Initialized to ten
    int cat_count {15}; // Initialized to fifteen
    
    // Expression as an initializer
    int domestic_animals_count {dog_count + cat_count};

    // Throws an error in c++20. Some compilers may chop of the decimal and store
    // the integer value so be careful 
    // int narrow_conversion {2.9};
    
    // Functional variable initialization
    int apple_count(5);
    int orange_count(2);
    int fruit_count(apple_count + orange_count);
    // This should compile but there is a loss of data and not as safe as curly braces
    int narrow_conversion_functional (2.9);

    // Assignment variable initialization
    int num1 = 10;
    int num2 = 20;
    int total = num1 + num2;

    std::cout << "Elephant count is: " << elephant_count << std::endl;
    std::cout << "Lion count is: " << lion_count << std::endl;
    std::cout << "Dog count is: " << dog_count << std::endl;
    std::cout << "Cat count is: " << cat_count << std::endl;
    std::cout << "Domestic animals count is: " << domestic_animals_count << std::endl;
    // std::cout << "Narrow conversion is: " << narrow_conversion << std::endl;
    std::cout << "Narrow conversion functional is: " << narrow_conversion_functional << std::endl;
    std::cout << "Apple count is: " << apple_count << std::endl;
    std::cout << "Orange count is: " << orange_count << std::endl;
    std::cout << "The total number of apples and oranges is: " << fruit_count << std::endl;
    std::cout << num1 << " + " << num2 << " = " << total << std::endl;

    return 0;
}